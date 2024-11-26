CREATE TABLE EMPLOYEES1 (
    Employee_id CHAR(10) PRIMARY KEY,
    First_Name VARCHAR2(30) NOT NULL,
    Last_Name VARCHAR2(30) NOT NULL,
    DOB DATE,
    Salary NUMBER(25) NOT NULL,
    Department_id CHAR(10)
);

INSERT ALL
    INTO EMPLOYEES1 (Employee_id, First_Name, Last_Name, DOB, Salary, Department_id) 
    VALUES ('E001', 'John', 'Doe', TO_DATE('10-07-1985', 'DD-MM-YYYY'), 50000, 'D01')
    INTO EMPLOYEES1 (Employee_id, First_Name, Last_Name, DOB, Salary, Department_id) 
    VALUES ('E002', 'Jane', 'Smith', TO_DATE('25-03-1990', 'DD-MM-YYYY'), 60000, 'D02')
    INTO EMPLOYEES1 (Employee_id, First_Name, Last_Name, DOB, Salary, Department_id) 
    VALUES ('E003', 'Alice', 'Brown', TO_DATE('14-05-1988', 'DD-MM-YYYY'), 55000, 'D01')
    INTO EMPLOYEES1 (Employee_id, First_Name, Last_Name, DOB, Salary, Department_id) 
    VALUES ('E004', 'Bob', 'Davis', TO_DATE('20-09-1995', 'DD-MM-YYYY'), 62000, 'D03')
    INTO EMPLOYEES1 (Employee_id, First_Name, Last_Name, DOB, Salary, Department_id) 
    VALUES ('E005', 'Charlie', 'Johnson', TO_DATE('30-11-1983', 'DD-MM-YYYY'), 58000, 'D02')
    INTO EMPLOYEES1 (Employee_id, First_Name, Last_Name, DOB, Salary, Department_id) 
    VALUES ('E006', 'David', 'Wilson', TO_DATE('05-01-1992', 'DD-MM-YYYY'), 63000, 'D03')
SELECT * FROM dual;

SELECT ROWID, Employee_id FROM EMPLOYEES1;

CREATE UNIQUE INDEX emp_id_unique_idx
ON EMPLOYEES1 (Employee_id);

CREATE INDEX emp_reverse_idx
ON EMPLOYEES1 (REVERSE(Employee_id));

CREATE UNIQUE INDEX emp_composite_idx
ON EMPLOYEES1 (Employee_id);


SELECT Employee_id, COUNT(*)
FROM EMPLOYEES1
GROUP BY Employee_id
HAVING COUNT(*) > 1;

CREATE INDEX emp_upper_lastname_idx
ON EMPLOYEES1 (UPPER(Last_Name));

DROP INDEX emp_upper_lastname_idx;
