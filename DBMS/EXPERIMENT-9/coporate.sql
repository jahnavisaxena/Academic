CREATE TABLE EMPLOYEES (
    Employee_id CHAR(10) PRIMARY KEY,
    First_Name CHAR(30) NOT NULL,
    Last_Name CHAR(30) NOT NULL,
    DOB DATE NOT NULL,
    Salary NUMBER(25),
    Department_id CHAR(10) NOT NULL
);

INSERT ALL
    INTO EMPLOYEES (Employee_id, First_Name, Last_Name, DOB, Salary, Department_id) VALUES ('E001', 'John', 'Doe', TO_DATE('1990-05-14', 'YYYY-MM-DD'), 60000, '10')
    INTO EMPLOYEES (Employee_id, First_Name, Last_Name, DOB, Salary, Department_id) VALUES ('E002', 'Jane', 'Smith', TO_DATE('1985-02-10', 'YYYY-MM-DD'), 75000, '20')
    INTO EMPLOYEES (Employee_id, First_Name, Last_Name, DOB, Salary, Department_id) VALUES ('E003', 'Mark', 'Brown', TO_DATE('1992-07-20', 'YYYY-MM-DD'), 80000, '30')
    INTO EMPLOYEES (Employee_id, First_Name, Last_Name, DOB, Salary, Department_id) VALUES ('E004', 'Lucy', 'Johnson', TO_DATE('1995-09-05', 'YYYY-MM-DD'), 72000, '20')
    INTO EMPLOYEES (Employee_id, First_Name, Last_Name, DOB, Salary, Department_id) VALUES ('E005', 'David', 'Williams', TO_DATE('1993-11-23', 'YYYY-MM-DD'), 68000, '40')
    INTO EMPLOYEES (Employee_id, First_Name, Last_Name, DOB, Salary, Department_id) VALUES ('E006', 'Emily', 'Davis', TO_DATE('1991-03-15', 'YYYY-MM-DD'), 59000, '20')
SELECT * FROM dual;


CREATE VIEW emp_view AS
SELECT Employee_id, Last_Name, Salary, Department_id
FROM EMPLOYEES;

ALTER TABLE EMPLOYEES MODIFY (Last_Name NULL);

INSERT INTO emp_view (Employee_id, Last_Name, Salary, Department_id) 
VALUES ('E007', 'Taylor', 50000, '30');

UPDATE emp_view
SET Salary = 62000
WHERE Employee_id = 'E007';

DROP VIEW emp_view;

CREATE VIEW salary_view AS
SELECT Employee_id, Last_Name, (Salary * 12) AS Annual_Salary
FROM EMPLOYEES
WHERE Department_id = '20';
