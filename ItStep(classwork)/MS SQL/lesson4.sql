--select Teachers.Name + ' ' + Teachers.Surname as 'ϲ�',
--	   count(Teachers.Surname) as '�-��� ������'
--from Teachers,Lectures,Subjects
--where Teachers.Id=Lectures.TeacherId
--and Subjects.Id=Lectures.SubjectId
--group by Teachers.Name + ' ' + Teachers.Surname;

--select Teachers.Name + ' ' + Teachers.Surname as 'ϲ�',
--	   count(Teachers.Surname) as '�-��� ������'
--from Teachers,Lectures,Subjects
--where Teachers.Id=Lectures.TeacherId
--and Subjects.Id=Lectures.SubjectId
--group by Teachers.Name + ' ' + Teachers.Surname
--having count(Teachers.Surname)>=2;

--select Faculties.name as '��������',
--	   count(Departments.Id) as '�-��� ������'
--from Departments,Faculties
--where Departments.FacultyId=Faculties.Id
--group by Faculties.Name;

--select Departments.Name as '����� �������',
--	   count(Groups.Id) as '�-��� ����'
--from Groups,Departments
--where Groups.DepartmentId=Departments.Id
--group by Departments.Name;

--select Faculties.Name as '����� ����������',
--	   count(Groups.Id) as 'count'
--from Groups,Departments, Faculties
--where Groups.DepartmentId=Departments.Id
--and Departments.FacultyId=Faculties.Id
--group by Faculties.Name;

--select Faculties.Name as '����� ���',
--	   sum(distinct(Teachers.Salary)) as '���� ��'
--from Faculties,Departments,Teachers,Groups,GroupsLectures,Lectures
--where Faculties.Id=Departments.FacultyId
--and Departments.Id=Groups.DepartmentId
--and Groups.Id=GroupsLectures.GroupId
--and GroupsLectures.LectureId=Lectures.Id
--and Lectures.TeacherId=Teachers.Id
--group by Faculties.Name;

--select Faculties.Name, 
--	   max(Departments.Financing) as '���� ������'
--from Faculties, Departments
--where Faculties.Id=Departments.FacultyId
--group by Faculties.Name;

--select Name,Surname,Salary
--from Teachers
--group by Name,Surname,Salary
--having Salary = (select max(salary) from Teachers);