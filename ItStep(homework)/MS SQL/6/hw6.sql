--1. ������� ����� ��������, �� ���� ������ �������� �Edward
--Hopper�.
--SELECT DISTINCT Auditorium_Name
--FROM Lectures
--WHERE Lecturer = 'Edward Hopper';

--2. ������� ������� ���������, �� ������� ������ � ����
--�F505�
--SELECT DISTINCT Assistant_LastName
--FROM Lectures
--WHERE Group_Name = 'F505';

--3. ������� ���������, �� ���� �������� �Alex Carmack�
--��� ���� 5 �����.
--SELECT DISTINCT Discipline_Name
--FROM Lectures
--WHERE Lecturer = 'Alex Carmack'
--AND Group_Name LIKE '5%';

--4. ������� ������� ����������, �� �� ������� ������ � ��������:
--SELECT DISTINCT Lecturer_LastName, Lecturer_FirstName
--FROM Lectures
--WHERE DATEPART(dw, Lecture_Date) != 2;

--5. ������� ����� ��������, �� ����������� �� �������, � ���� ���� ������ � ������ ������� ����� �� ����� ���:
--SELECT DISTINCT A.Auditorium_Name, A.Building
--FROM Auditoriums A
--LEFT JOIN Lectures L ON A.Auditorium_Name = L.Auditorium_Name
--AND L.Lecture_Date = DATEADD(WEEK, 1, DATEADD(DAY, 7, CAST('2024-03-01' AS DATE)))
--AND L.Lecture_Time = 'third'
--WHERE L.Lecture_Date IS NULL;

--6. ������� ���� ����� ���������� ���������� "Computer Science", �� �� ��������� ����� ������� "Software Development":
--SELECT DISTINCT CONCAT(Last_Name, ' ', First_Name) AS Full_Name
--FROM Lecturers
--WHERE Faculty = 'Computer Science'
--AND NOT EXISTS (
--    SELECT 1 FROM Groups
--    WHERE Curator = CONCAT(Last_Name, ' ', First_Name)
--    AND Department = 'Software Development'
--);

--7. ������� ������ ������ ��� �������, �� � � �������� ����������, ������ �� ��������:
--SELECT Building_Number
--FROM (
--    SELECT Building_Number FROM Faculties
--    UNION
--    SELECT Building_Number FROM Departments
--    UNION
--    SELECT DISTINCT Building FROM Auditoriums
--) AS All_Buildings;

--8. ������� ���� ����� ���������� � ������ �������: ������ ����������, ��������� ������, ���������, ��������, ���������:
--SELECT CONCAT(First_Name, ' ', Last_Name) AS Full_Name, 'Dean' AS Position
--FROM Deans
--UNION
--SELECT CONCAT(First_Name, ' ', Last_Name), 'Department Head'
--FROM Department_Heads
--UNION
--SELECT CONCAT(First_Name, ' ', Last_Name), 'Lecturer'
--FROM Lecturers
--UNION
--SELECT CONCAT(First_Name, ' ', Last_Name), 'Curator'
--FROM Curators
--UNION
--SELECT CONCAT(First_Name, ' ', Last_Name), 'Assistant'
--FROM Assistants;

--9. ������� �� ����� (��� ���������), � �� � ������� � ��������� "A311" �� "A104" �������:
--SELECT DISTINCT DATEPART(dw, Lecture_Date) AS Weekday
--FROM Lectures
--WHERE Auditorium_Name IN ('A311', 'A104');