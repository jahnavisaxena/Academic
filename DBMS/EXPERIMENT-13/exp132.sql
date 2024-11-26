DECLARE
    counter NUMBER := 1;
BEGIN
    LOOP
        DBMS_OUTPUT.PUT_LINE('Welcome to PL/SQL Programming');
        counter := counter + 1;
        EXIT WHEN counter > 20;
    END LOOP;
END;
