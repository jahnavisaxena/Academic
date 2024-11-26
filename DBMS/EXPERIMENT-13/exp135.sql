DECLARE
    num NUMBER := 5;
    s NUMBER := 0;
BEGIN
    FOR i IN 1..num LOOP
        s := s + i; 
    END LOOP;

    DBMS_OUTPUT.PUT_LINE('The sum of the first '||num||' numbers is: '||s);  
END;
/
