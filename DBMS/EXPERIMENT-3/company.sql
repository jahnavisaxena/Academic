CREATE TABLE DEPARTMENT (
    Dnumber NUMBER NOT NULL PRIMARY KEY,
    Dname VARCHAR2(50) NOT NULL UNIQUE,
    Mgr_ssn CHAR(9) NOT NULL,
    Mgr_start_date DATE
);

INSERT ALL
    INTO DEPARTMENT (Dname, Dnumber, Mgr_ssn, Mgr_start_date) VALUES
        ('Research', 5, '333445555', TO_DATE('1988-05-22', 'YYYY-MM-DD'))
    INTO DEPARTMENT (Dname, Dnumber, Mgr_ssn, Mgr_start_date) VALUES
        ('Administration', 4, '987654321', TO_DATE('1995-01-01', 'YYYY-MM-DD'))
    INTO DEPARTMENT (Dname, Dnumber, Mgr_ssn, Mgr_start_date) VALUES
        ('Headquarters', 1, '888665555', TO_DATE('1981-06-19', 'YYYY-MM-DD'))
SELECT * FROM dual;


CREATE TABLE EMPLOYEE (
    Ssn CHAR(9) NOT NULL PRIMARY KEY,
    Fname VARCHAR2(50) NOT NULL,
    Lname VARCHAR2(50) NOT NULL,
    Address VARCHAR2(100),
    Salary NUMBER(10,2),
    Sex CHAR(1),
    Bdate DATE,
    Super_ssn CHAR(9),
    Dno NUMBER NOT NULL,
    FOREIGN KEY (Super_ssn) REFERENCES EMPLOYEE(Ssn),
    FOREIGN KEY (Dno) REFERENCES DEPARTMENT(Dnumber)
);

INSERT ALL
    INTO EMPLOYEE (Ssn, Fname, Lname, Address, Salary, Sex, Bdate, Super_ssn, Dno) VALUES
        ('333445555', 'Franklin', 'Wong', '638 Voss, Houston TX', 40000, 'M', TO_DATE('1965-12-08', 'YYYY-MM-DD'), NULL, 5)
    INTO EMPLOYEE (Ssn, Fname, Lname, Address, Salary, Sex, Bdate, Super_ssn, Dno) VALUES
        ('987654321', 'Jennifer', 'Wallace', '291 Berry, Bellaire TX', 43000, 'F', TO_DATE('1941-06-20', 'YYYY-MM-DD'), NULL, 4)
    INTO EMPLOYEE (Ssn, Fname, Lname, Address, Salary, Sex, Bdate, Super_ssn, Dno) VALUES
        ('888665555', 'James', 'Borg', '450 Stone, Houston TX', 55000, NULL, TO_DATE('1937-11-10', 'YYYY-MM-DD'), NULL, 1)
    INTO EMPLOYEE (Ssn, Fname, Lname, Address, Salary, Sex, Bdate, Super_ssn, Dno) VALUES
        ('123456789', 'John', 'Smith', '731 Fondren, Houston TX', 30000, 'M', TO_DATE('1965-01-09', 'YYYY-MM-DD'), '333445555', 5)
    INTO EMPLOYEE (Ssn, Fname, Lname, Address, Salary, Sex, Bdate, Super_ssn, Dno) VALUES
        ('999887777', 'Alicia', 'Zelaya', '3321 Castle, Spring TX', 25000, 'F', TO_DATE('1968-01-19', 'YYYY-MM-DD'), '987654321', 4)
    INTO EMPLOYEE (Ssn, Fname, Lname, Address, Salary, Sex, Bdate, Super_ssn, Dno) VALUES
        ('666884444', 'Ramesh', 'Narayan', '975 Fire Oak, Humble TX', 38000, 'M', TO_DATE('1962-09-15', 'YYYY-MM-DD'), '333445555', 5)
    INTO EMPLOYEE (Ssn, Fname, Lname, Address, Salary, Sex, Bdate, Super_ssn, Dno) VALUES
        ('453453453', 'Joyce', 'English', '5631 Rice, Houston TX', 25000, 'F', TO_DATE('1972-07-31', 'YYYY-MM-DD'), '333445555', 5)
    INTO EMPLOYEE (Ssn, Fname, Lname, Address, Salary, Sex, Bdate, Super_ssn, Dno) VALUES
        ('987987987', 'Ahmad', 'Jabbar', '980 Dallas, Houston TX', 25000, 'M', TO_DATE('1969-03-29', 'YYYY-MM-DD'), '987654321', 4)
SELECT * FROM dual;



ALTER TABLE DEPARTMENT
ADD CONSTRAINT fk_mgr_ssn
FOREIGN KEY (Mgr_ssn) REFERENCES EMPLOYEE(Ssn);


CREATE TABLE PROJECT (
    Pnumber NUMBER NOT NULL PRIMARY KEY,
    Pname VARCHAR2(50) NOT NULL UNIQUE,
    Plocation VARCHAR2(50),
    Dnum NUMBER NOT NULL,
    FOREIGN KEY (Dnum) REFERENCES DEPARTMENT(Dnumber)
);

INSERT ALL
    INTO PROJECT (Pname, Pnumber, Plocation, Dnum) VALUES
        ('ProductX', 1, 'Bellaire', 5)
    INTO PROJECT (Pname, Pnumber, Plocation, Dnum) VALUES
        ('ProductY', 2, 'Sugarland', 5)
    INTO PROJECT (Pname, Pnumber, Plocation, Dnum) VALUES
        ('ProductZ', 3, 'Houston', 5)
    INTO PROJECT (Pname, Pnumber, Plocation, Dnum) VALUES
        ('Computerization', 10, 'Stafford', 4)
    INTO PROJECT (Pname, Pnumber, Plocation, Dnum) VALUES
        ('Reorganization', 20, 'Houston', 1)
    INTO PROJECT (Pname, Pnumber, Plocation, Dnum) VALUES
        ('Newbenefits', 30, 'Stafford', 4)
SELECT * FROM dual;



CREATE TABLE DEPT_LOCATIONS (
    Dnumber NUMBER NOT NULL,
    Dlocation VARCHAR2(50) NOT NULL,
    PRIMARY KEY (Dnumber, Dlocation),
    FOREIGN KEY (Dnumber) REFERENCES DEPARTMENT(Dnumber)
);


INSERT ALL
    INTO DEPT_LOCATIONS (Dnumber, Dlocation) VALUES
        (1, 'Houston')
    INTO DEPT_LOCATIONS (Dnumber, Dlocation) VALUES
        (4, 'Stafford')
    INTO DEPT_LOCATIONS (Dnumber, Dlocation) VALUES
        (5, 'Bellaire')
    INTO DEPT_LOCATIONS (Dnumber, Dlocation) VALUES
        (5, 'Houston')
    INTO DEPT_LOCATIONS (Dnumber, Dlocation) VALUES
        (5, 'Sugarland')
SELECT * FROM dual;



CREATE TABLE WORKS_ON (
    Essn CHAR(9) NOT NULL,
    Pno NUMBER NOT NULL,
    Hours NUMBER(3,1) NOT NULL,
    PRIMARY KEY (Essn, Pno),
    FOREIGN KEY (Essn) REFERENCES EMPLOYEE(Ssn),
    FOREIGN KEY (Pno) REFERENCES PROJECT(Pnumber)
);


INSERT ALL
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('123456789', 1, 32.5)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('123456789', 2, 7.5)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('666884444', 3, 40.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('453453453', 1, 20.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('453453453', 2, 20.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('333445555', 2, 10.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('333445555', 3, 10.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('333445555', 10, 10.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('333445555', 20, 10.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('999887777', 30, 30.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('999887777', 10, 10.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('987987987', 10, 35.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('987987987', 30, 5.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('987654321', 30, 20.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('987654321', 20, 15.0)
    INTO WORKS_ON (Essn, Pno, Hours) VALUES
        ('888665555', 20, 15.0)
SELECT * FROM dual;



CREATE TABLE DEPENDENT (
    Essn CHAR(9) NOT NULL,
    Dependent_name VARCHAR2(255) NOT NULL,
    Sex CHAR(1),
    Bdate DATE,
    Relationship VARCHAR2(50),
    PRIMARY KEY (Essn, Dependent_name),
    FOREIGN KEY (Essn) REFERENCES EMPLOYEE(Ssn)
);

INSERT ALL
    INTO DEPENDENT (Essn, Dependent_name, Sex, Bdate, Relationship) VALUES
        ('333445555', 'Alice', 'F', TO_DATE('1986-04-04', 'YYYY-MM-DD'), 'Daughter')
    INTO DEPENDENT (Essn, Dependent_name, Sex, Bdate, Relationship) VALUES
        ('333445555', 'Theodore', 'M', TO_DATE('1983-10-25', 'YYYY-MM-DD'), 'Son')
    INTO DEPENDENT (Essn, Dependent_name, Sex, Bdate, Relationship) VALUES
        ('333445555', 'Joy', 'F', TO_DATE('1958-05-03', 'YYYY-MM-DD'), 'Spouse')
    INTO DEPENDENT (Essn, Dependent_name, Sex, Bdate, Relationship) VALUES
        ('987654321', 'Abner', 'M', TO_DATE('1942-02-28', 'YYYY-MM-DD'), 'Spouse')
    INTO DEPENDENT (Essn, Dependent_name, Sex, Bdate, Relationship) VALUES
        ('123456789', 'Michael', 'M', TO_DATE('1988-01-04', 'YYYY-MM-DD'), 'Son')
    INTO DEPENDENT (Essn, Dependent_name, Sex, Bdate, Relationship) VALUES
        ('123456789', 'Alice', 'F', TO_DATE('1988-12-30', 'YYYY-MM-DD'), 'Daughter')
    INTO DEPENDENT (Essn, Dependent_name, Sex, Bdate, Relationship) VALUES
        ('123456789', 'Elizabeth', 'F', TO_DATE('1967-05-05', 'YYYY-MM-DD'), 'Spouse')
SELECT * FROM dual;
