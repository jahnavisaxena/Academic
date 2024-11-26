DECLARE
    A NUMBER := 34;
    B NUMBER := 98;
    C NUMBER := 10;
    max_val NUMBER;
BEGIN
    IF A > B AND A > C THEN
        max_val := A;
    ELSIF B > A AND B > C THEN
        max_val := B;
    ELSE
        max_val := C;
    END IF;
    DBMS_OUTPUT.PUT_LINE('The greatest value is: ' || max_val);
END;
