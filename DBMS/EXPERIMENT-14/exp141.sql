DECLARE
 result NUMBER;
BEGIN
    result := get_greatest(90, 66, 15);
    DBMS_OUTPUT.PUT_LINE('The greatest value is: ' || result);
END;
/
