CREATE TABLE CLIENT_MASTER (
    CLIENTNO VARCHAR2(6) PRIMARY KEY CHECK (REGEXP_LIKE(CLIENTNO, '^C.*')),
    NAME VARCHAR2(20) NOT NULL,
    ADDRESS1 VARCHAR2(30),
    ADDRESS2 VARCHAR2(30),
    CITY VARCHAR2(15),
    PINCODE NUMBER(8),
    STATE VARCHAR2(15),
    BALDUE NUMBER(10, 2)
);

CREATE TABLE PRODUCT_MASTER (
    PRODUCTNO VARCHAR2(6) PRIMARY KEY CHECK (REGEXP_LIKE(PRODUCTNO, '^P.*')),
    DESCRIPTION VARCHAR2(15) NOT NULL,
    PROFITPERCENT NUMBER(4, 2) NOT NULL,
    UNIT_MEASURE VARCHAR2(10) NOT NULL,
    QTYONHAND NUMBER(8) NOT NULL,
    REORDERLVL NUMBER(8) NOT NULL,
    SELLPRICE NUMBER(8, 2) NOT NULL,
    COSTPRICE NUMBER(8, 2) NOT NULL
);

CREATE TABLE SALESMAN_MASTER (
    SALESMANNO VARCHAR2(6) PRIMARY KEY CHECK (REGEXP_LIKE(SALESMANNO, '^S.*')),
    SALESMANNAME VARCHAR2(20) NOT NULL,
    ADDRESS1 VARCHAR2(30) NOT NULL,
    ADDRESS2 VARCHAR2(30),
    CITY VARCHAR2(20),
    PINCODE NUMBER(8),
    STATE VARCHAR2(20),
    SALAMT NUMBER(8, 2) NOT NULL CHECK (SALAMT > 0),
    TGTTOGET NUMBER(6, 2) NOT NULL CHECK (TGTTOGET > 0),
    YTDSALES NUMBER(6, 2) NOT NULL,
    REMARKS VARCHAR2(60)
);

INSERT INTO CLIENT_MASTER (Client_no, Name, City, Pincode, State, BalDue)
VALUES 
('C00001', 'Ivan bayross', 'Mumbai', '400054', 'Maharashtra', 15000),
('C00002', 'Mamta muzumdar', 'Madras', '780001', 'Tamil nadu', 0),
('C00003', 'Chhaya bankar', 'Mumbai', '400057', 'Maharashtra', 5000),
('C00004', 'Ashwini joshi', 'Bangalore', '560001', 'Karnataka', 0),
('C00005', 'Hansel colaco', 'Mumbai', '400060', 'Maharashtra', 2000),
('C00006', 'Deepak sharma', 'Mangalore', '560050', 'Karnataka', 0);

INSERT ALL
    INTO CLIENT_MASTER (Client_no, Name, City, Pincode, State, BalDue) VALUES ('C00001', 'Ivan bayross', 'Mumbai', '400054', 'Maharashtra', 15000)
    INTO CLIENT_MASTER (Client_no, Name, City, Pincode, State, BalDue) VALUES ('C00002', 'Mamta muzumdar', 'Madras', '780001', 'Tamil nadu', 0)
    INTO CLIENT_MASTER (Client_no, Name, City, Pincode, State, BalDue) VALUES ('C00003', 'Chhaya bankar', 'Mumbai', '400057', 'Maharashtra', 5000)
    INTO CLIENT_MASTER (Client_no, Name, City, Pincode, State, BalDue) VALUES ('C00004', 'Ashwini joshi', 'Bangalore', '560001', 'Karnataka', 0)
    INTO CLIENT_MASTER (Client_no, Name, City, Pincode, State, BalDue) VALUES ('C00005', 'Hansel colaco', 'Mumbai', '400060', 'Maharashtra', 2000)
    INTO CLIENT_MASTER (Client_no, Name, City, Pincode, State, BalDue) VALUES ('C00006', 'Deepak sharma', 'Mangalore', '560050', 'Karnataka', 0)
SELECT * FROM dual;

INSERT ALL
    INTO PRODUCT (Product_No, Description, Profit_percent, Unit_measure, Quantity_On_hand, Recorder_Level, Sell_Price, Cost_Price) 
    VALUES ('P00001', 'T-Shirt', 5, 'Piece', 200, 50, 350, 250)
    
    INTO PRODUCT (Product_No, Description, Profit_percent, Unit_measure, Quantity_On_hand, Recorder_Level, Sell_Price, Cost_Price) 
    VALUES ('P0345', 'Shirts', 6, 'Piece', 150, 50, 500, 350)
    
    INTO PRODUCT (Product_No, Description, Profit_percent, Unit_measure, Quantity_On_hand, Recorder_Level, Sell_Price, Cost_Price) 
    VALUES ('P06734', 'Cotton jeans', 5, 'Piece', 100, 20, 600, 450)
    
    INTO PRODUCT (Product_No, Description, Profit_percent, Unit_measure, Quantity_On_hand, Recorder_Level, Sell_Price, Cost_Price) 
    VALUES ('P07865', 'Jeans', 5, 'Piece', 100, 20, 750, 500)
    
    INTO PRODUCT (Product_No, Description, Profit_percent, Unit_measure, Quantity_On_hand, Recorder_Level, Sell_Price, Cost_Price) 
    VALUES ('P07868', 'Trousers', 2, 'Piece', 150, 50, 850, 550)
    
    INTO PRODUCT (Product_No, Description, Profit_percent, Unit_measure, Quantity_On_hand, Recorder_Level, Sell_Price, Cost_Price) 
    VALUES ('P07885', 'Pull Overs', 2.5, 'Piece', 80, 30, 700, 450)
    
    INTO PRODUCT (Product_No, Description, Profit_percent, Unit_measure, Quantity_On_hand, Recorder_Level, Sell_Price, Cost_Price) 
    VALUES ('P07965', 'Denim jeans', 4, 'Piece', 100, 40, 350, 250)
    
    INTO PRODUCT (Product_No, Description, Profit_percent, Unit_measure, Quantity_On_hand, Recorder_Level, Sell_Price, Cost_Price) 
    VALUES ('P07975', 'Lycra tops', 5, 'Piece', 70, 30, 300, 175)
    
    INTO PRODUCT (Product_No, Description, Profit_percent, Unit_measure, Quantity_On_hand, Recorder_Level, Sell_Price, Cost_Price) 
    VALUES ('P08865', 'Skirts', 5, 'Piece', 75, 30, 450, 300)
SELECT * FROM dual;

INSERT ALL
    INTO SALESMAN_MASTER (Salesman_No, Name, Address1, Address2, City, Pin_Code, State) 
    VALUES ('S00001', 'Aman', 'A/14', 'Worli', 'Mumbai', '400002', 'Maharashtra')
    
    INTO SALESMAN_MASTER (Salesman_No, Name, Address1, Address2, City, Pin_Code, State) 
    VALUES ('S00002', 'Omkar', '65', 'Nariman', 'Mumbai', '400001', 'Maharashtra')
    
    INTO SALESMAN_MASTER (Salesman_No, Name, Address1, Address2, City, Pin_Code, State) 
    VALUES ('S00003', 'Raj', 'P-7', 'Bandra', 'Mumbai', '400032', 'Maharashtra')
    
    INTO SALESMAN_MASTER (Salesman_No, Name, Address1, Address2, City, Pin_Code, State) 
    VALUES ('S00004', 'Ashish', 'A/5', 'Juhu', 'Mumbai', '400044', 'Maharashtra')
SELECT * FROM dual;

INSERT ALL
    INTO SALESMAN_MASTER (Salesman_No, Name, Address1, Address2, City, Pin_Code, State, SALAMT, TGTTOGET, YTDSALES, REMARKS) 
    VALUES ('S00001', 'Aman', 'A/14', 'Worli', 'Mumbai', '400002', 'Maharashtra', 50000.50, 10000.75, 8000.25, 'Top performer')
    
    INTO SALESMAN_MASTER (Salesman_No, Name, Address1, Address2, City, Pin_Code, State, SALAMT, TGTTOGET, YTDSALES, REMARKS) 
    VALUES ('S00002', 'Omkar', '65', 'Nariman', 'Mumbai', '400001', 'Maharashtra', 60000.00, 12000.00, 9500.50, 'Consistent sales')
    
    INTO SALESMAN_MASTER (Salesman_No, Name, Address1, Address2, City, Pin_Code, State, SALAMT, TGTTOGET, YTDSALES, REMARKS) 
    VALUES ('S00003', 'Raj', 'P-7', 'Bandra', 'Mumbai', '400032', 'Maharashtra', 45000.75, 9000.50, 7000.00, 'Strong growth')
    
    INTO SALESMAN_MASTER (Salesman_No, Name, Address1, Address2, City, Pin_Code, State, SALAMT, TGTTOGET, YTDSALES, REMARKS) 
    VALUES ('S00004', 'Ashish', 'A/5', 'Juhu', 'Mumbai', '400044', 'Maharashtra', 55000.25, 11000.75, 8800.50, 'Improving steadily')
SELECT * FROM dual;

INSERT ALL
    INTO SALESMAN_MASTER (SALESMANNO, SALESMANNAME, ADDRESS1, ADDRESS2, CITY, PINCODE, STATE, SALAMT, TGTTOGET, YTDSALES, REMARKS) 
    VALUES ('S00001', 'Aman', 'A/14', 'Worli', 'Mumbai', 400002, 'Maharashtra', 99999.99, 9999.99, 8000.25, 'Top performer')
    
    INTO SALESMAN_MASTER (SALESMANNO, SALESMANNAME, ADDRESS1, ADDRESS2, CITY, PINCODE, STATE, SALAMT, TGTTOGET, YTDSALES, REMARKS) 
    VALUES ('S00002', 'Omkar', '65', 'Nariman', 'Mumbai', 400001, 'Maharashtra', 88888.88, 8888.88, 9500.50, 'Consistent sales')
    
    INTO SALESMAN_MASTER (SALESMANNO, SALESMANNAME, ADDRESS1, ADDRESS2, CITY, PINCODE, STATE, SALAMT, TGTTOGET, YTDSALES, REMARKS) 
    VALUES ('S00003', 'Raj', 'P-7', 'Bandra', 'Mumbai', 400032, 'Maharashtra', 77777.77, 7777.77, 7000.00, 'Strong growth')
    
    INTO SALESMAN_MASTER (SALESMANNO, SALESMANNAME, ADDRESS1, ADDRESS2, CITY, PINCODE, STATE, SALAMT, TGTTOGET, YTDSALES, REMARKS) 
    VALUES ('S00004', 'Ashish', 'A/5', 'Juhu', 'Mumbai', 400044, 'Maharashtra', 66666.66, 6666.66, 8800.50, 'Improving steadily')
SELECT * FROM dual;

SELECT Name FROM Client_Master;

SELECT * FROM Client_Master;

SELECT Name, City, State FROM Client_Master;

SELECT Description FROM Product_Master;

SELECT * FROM Client_Master WHERE City = 'Mumbai';

SELECT SalesmanName FROM Salesman_Master WHERE SALAMT = 3000.00;

UPDATE Client_Master SET City = 'Bangalore' WHERE ClientNo = 'C00005';

UPDATE Client_Master SET BalDue = 1000 WHERE ClientNo = 'C00001';

UPDATE Product_Master SET Cost_Price = 950.00 WHERE Description = 'Trousers';

UPDATE Salesman_Master SET City = 'Pune';

DELETE FROM Salesman_Master WHERE SALAMT = 3500.00;

DELETE FROM Product_Master WHERE Quantity_On_hand = 100;

DELETE FROM Client_Master WHERE State = 'Tamil Nadu';

ALTER TABLE Client_Master ADD Telephone INTEGER;

ALTER TABLE Product_Master MODIFY Sell_Price NUMBER(10,2);

DROP TABLE Client_Master;
