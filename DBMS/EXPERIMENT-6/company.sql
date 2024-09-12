CREATE TABLE employees (
    employee_id NUMBER PRIMARY KEY,
    name VARCHAR2(100),
    first_name VARCHAR2(50),
    last_name VARCHAR2(50),
    department_id NUMBER,
    supervisor_id NUMBER,
    location VARCHAR2(100)
);
CREATE TABLE departments (
    department_id NUMBER PRIMARY KEY,
    department_name VARCHAR2(100),
    location VARCHAR2(100),
    manager_id NUMBER
);
CREATE TABLE projects (
    project_id NUMBER PRIMARY KEY,
    project_name VARCHAR2(100)
);

CREATE TABLE project_assignments (
    employee_id NUMBER,
    project_id NUMBER,
    hours_per_week NUMBER,
    PRIMARY KEY (employee_id, project_id)
);
CREATE TABLE dependents (
    dependent_id NUMBER PRIMARY KEY,
    employee_id NUMBER,
    dependent_first_name VARCHAR2(50)
);
INSERT ALL
    INTO employees (employee_id, name, first_name, last_name, department_id, supervisor_id, location) VALUES (1, 'John Doe', 'John', 'Doe', 5, NULL, 'Houston')
    INTO employees (employee_id, name, first_name, last_name, department_id, supervisor_id, location) VALUES (2, 'Jane Smith', 'Jane', 'Smith', 5, 1, 'Houston')
    INTO employees (employee_id, name, first_name, last_name, department_id, supervisor_id, location) VALUES (3, 'Franklin Wong', 'Franklin', 'Wong', 1, NULL, 'San Francisco')
    INTO employees (employee_id, name, first_name, last_name, department_id, supervisor_id, location) VALUES (4, 'Alice Brown', 'Alice', 'Brown', 2, 3, 'New York')
    INTO employees (employee_id, name, first_name, last_name, department_id, supervisor_id, location) VALUES (5, 'Bob Johnson', 'Bob', 'Johnson', 2, 3, 'San Francisco')
SELECT * FROM dual;
INSERT ALL
    INTO departments (department_id, department_name, location, manager_id) VALUES (1, 'IT', 'San Francisco', 3)
    INTO departments (department_id, department_name, location, manager_id) VALUES (2, 'HR', 'New York', 3)
    INTO departments (department_id, department_name, location, manager_id) VALUES (5, 'Marketing', 'Houston', 1)
SELECT * FROM dual;
INSERT ALL
    INTO projects (project_id, project_name) VALUES (1, 'ProductX')
    INTO projects (project_id, project_name) VALUES (2, 'ProductY')
SELECT * FROM dual;
INSERT ALL
    INTO project_assignments (employee_id, project_id, hours_per_week) VALUES (1, 1, 15)
    INTO project_assignments (employee_id, project_id, hours_per_week) VALUES (2, 1, 5)
    INTO project_assignments (employee_id, project_id, hours_per_week) VALUES (2, 2, 12)
    INTO project_assignments (employee_id, project_id, hours_per_week) VALUES (4, 1, 20)
SELECT * FROM dual;
INSERT ALL
    INTO dependents (dependent_id, employee_id, dependent_first_name) VALUES (1, 1, 'John')
    INTO dependents (dependent_id, employee_id, dependent_first_name) VALUES (2, 4, 'Alice')
SELECT * FROM dual;


SELECT e.name
FROM employees e
JOIN project_assignments pa ON e.employee_id = pa.employee_id
JOIN projects p ON pa.project_id = p.project_id
WHERE e.department_id = 5
  AND p.project_name = 'ProductX'
  AND pa.hours_per_week > 10;

SELECT e.name
FROM employees e
JOIN dependents d ON e.employee_id = d.employee_id
WHERE e.first_name = d.dependent_first_name;

SELECT e.name
FROM employees e
JOIN employees s ON e.supervisor_id = s.employee_id
WHERE s.name = 'Franklin Wong';

SELECT e.name
FROM employees e
JOIN project_assignments pa ON e.employee_id = pa.employee_id
GROUP BY e.name
HAVING COUNT(DISTINCT pa.project_id) = (SELECT COUNT(*) FROM projects);

SELECT e.name
FROM employees e
LEFT JOIN project_assignments pa ON e.employee_id = pa.employee_id
WHERE pa.project_id IS NULL;

SELECT DISTINCT e.name, e.address
FROM employees e
JOIN project_assignments pa ON e.employee_id = pa.employee_id;

SELECT e.name, e.address
FROM employees e
JOIN departments d ON e.department_id = d.department_id
WHERE e.location = 'Houston'
  AND d.department_id NOT IN (
    SELECT department_id
    FROM departments
    WHERE location = 'Houston'
  );

SELECT dm.last_name
FROM departments d
JOIN employees dm ON d.manager_id = dm.employee_id
LEFT JOIN dependents dpt ON dm.employee_id = dpt.employee_id
WHERE dpt.dependent_id IS NULL;
