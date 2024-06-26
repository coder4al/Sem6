CREATE OR REPLACE TRIGGER trg_employee_salary_check
BEFORE INSERT OR UPDATE OF salary ON employees
FOR EACH ROW
DECLARE
    v_max_salary NUMBER := 10000; -- Maximum allowed salary
BEGIN
    IF :NEW.salary > v_max_salary THEN
        RAISE_APPLICATION_ERROR(-20001, 'Salary exceeds maximum allowed value.');
    END IF;
END;
/