DECLARE
    num NUMBER := 4;
    factorial NUMBER := 1;
    i NUMBER := 1;
BEGIN
    FOR i IN 1..num LOOP
        factorial := factorial * i;
    END LOOP;
    DBMS_OUTPUT.PUT_LINE('Factorial of ' || num || ' is: ' || factorial);
END;
