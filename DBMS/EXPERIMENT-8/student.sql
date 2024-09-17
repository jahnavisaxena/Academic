CREATE TABLE Student (
    sid NUMBER PRIMARY KEY,
    sname VARCHAR2(50),
    age NUMBER
);

CREATE TABLE Match (
    mid VARCHAR2(10) PRIMARY KEY,
    mname VARCHAR2(50),
    venue VARCHAR2(50)
);

CREATE TABLE Play (
    sid NUMBER,
    mid VARCHAR2(10),
    day NUMBER,
    FOREIGN KEY (sid) REFERENCES Student(sid),
    FOREIGN KEY (mid) REFERENCES Match(mid)
);

INSERT INTO Student (sid, sname) VALUES (1, 'Alice');
INSERT INTO Student (sid, sname) VALUES (2, 'Bob');

INSERT INTO Match (mid, mname, venue) VALUES ('A10', 'Match A', 'Delhi');
INSERT INTO Match (mid, mname, venue) VALUES ('B10', 'Match B', 'Mumbai');

INSERT INTO Play (sid, mid, day) VALUES (1, 'A10', 1);
INSERT INTO Play (sid, mid, day) VALUES (2, 'B10', 2);
INSERT INTO Play (sid, mid, day) VALUES (1, 'B10', 3);
SELECT s.*
FROM Student s
JOIN Play p ON s.sid = p.sid
WHERE p.mid = 'B10';

SELECT m.mname
FROM Match m
JOIN Play p ON m.mid = p.mid
JOIN Student s ON s.sid = p.sid
WHERE s.sname = 'Amit';

SELECT s.sname
FROM Student s
JOIN Play p ON s.sid = p.sid
JOIN Match m ON p.mid = m.mid
WHERE m.venue = 'Delhi';

SELECT Student.sname FROM Student
INNER JOIN Play ON Student.sid = Play.sid;

SELECT Student.sid, Student.sname
FROM Student
INNER JOIN Play ON Student.sid = Play.sid
GROUP BY Student.sid
HAVING COUNT(DISTINCT Play.mid) = 2;

SELECT Student.sid FROM Student
INNER JOIN Play ON Student.sid = Play.sid
INNER JOIN Match ON Play.mid = Match.mid
WHERE Match.venue IN ('Delhi', 'Mumbai');

SELECT AVG(age) AS average_age
FROM Student;
