CREATE TABLE Supplier (
    scode NUMBER PRIMARY KEY,
    sname VARCHAR2(50),
    scity VARCHAR2(50),
    turnover NUMBER
);

CREATE TABLE Part (
    pcode NUMBER PRIMARY KEY,
    weight NUMBER,
    color VARCHAR2(20),
    cost NUMBER,
    sellingprice NUMBER
);

CREATE TABLE Supplier_Part (
    scode NUMBER,
    pcode NUMBER,
    qty NUMBER,
    PRIMARY KEY (scode, pcode),
    FOREIGN KEY (scode) REFERENCES Supplier(scode),
    FOREIGN KEY (pcode) REFERENCES Part(pcode)
);


INSERT ALL 
     INTO Supplier (scode, sname, scity, turnover) VALUES (1, 'Supplier A', 'Bombay', 50)
     INTO Supplier (scode, sname, scity, turnover) VALUES (2, 'Supplier B', 'Delhi', 100)
     INTO Supplier (scode, sname, scity, turnover) VALUES (3, 'Supplier C', 'Bombay', NULL)
     INTO Supplier (scode, sname, scity, turnover) VALUES (4, 'Supplier D', 'Chennai', 75)
SELECT * FROM DUAL;

INSERT ALL
     INTO Part (pcode, weight, color, cost, sellingprice) VALUES (1, 20, 'Red', 20, 25)
     INTO Part (pcode, weight, color, cost, sellingprice) VALUES (2, 30, 'Blue', 30, 35)
     INTO Part (pcode, weight, color, cost, sellingprice) VALUES (3, 40, 'Green', 40, 45)
SELECT * FROM DUAL;


INSERT ALL 
     INTO Supplier_Part (scode, pcode, qty) VALUES (1, 1, 100)
     INTO Supplier_Part (scode, pcode, qty) VALUES (1, 2, 200)
     INTO Supplier_Part (scode, pcode, qty) VALUES (2, 2, 150)
     INTO Supplier_Part (scode, pcode, qty) VALUES (3, 3, 250)
SELECT * FROM DUAL;

SELECT scode, pcode 
FROM Supplier_Part 
ORDER BY scode ASC;

SELECT COUNT(*) total_suppliers 
FROM Supplier;

SELECT pcode FROM Part WHERE weight BETWEEN 25 AND 35;

SELECT scode FROM Supplier WHERE turnover IS NULL;

SELECT pcode FROM Part WHERE cost IN(20,30,40);

SELECT SUM(qty) AS total_qty FROM Supplier_Part WHERE pcode = 2;

SELECT sname 
FROM Supplier 
WHERE scode IN (SELECT scode FROM Supplier_Part WHERE pcode = 2);

SELECT pcode 
FROM Part 
WHERE cost > (SELECT AVG(cost) FROM Part);

SELECT scode, turnover 
FROM Supplier 
ORDER BY turnover DESC;
