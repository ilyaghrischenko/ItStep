--������� ������� ���������� ������� "������� ��������"
--select Teachers.Name,count(Teachers.Name)
--from Teachers,Lectures,GroupsLectures,Groups,Departments
--where Lectures.TeacherId=Teachers.Id 
--and Lectures.Id=GroupsLectures.LectureId
--and GroupsLectures.GroupId=Groups.Id
--and Groups.DepartmentId=Departments.Id
--and Departments.Name='������� ��������'
--group by Teachers.Name

--������� ������� ������, �� ���� �������� �������	������.
--select count(Subjects.Id),Teachers.Name
--from Teachers,Lectures,Subjects
--where Lectures.TeacherId=Teachers.Id 
--and Lectures.SubjectId=Subjects.Id
--and Teachers.Name='������' and Teachers.Surname='������'
--group by Teachers.Name

--������� ������� ������, �� ����������� � ������� �510�.
--select count(Subjects.Id),Subjects.Name
--from Subjects,Lectures
--where Lectures.SubjectId=Subjects.Id 
--and Lectures.LectureRoom='510'
--group by Subjects.Name

--������� ����� �������� �� ������� ������, �� �����-
--������ � ���.
--select Lectures.LectureRoom,count(Subjects.Id)
--from Lectures,Subjects
--where Lectures.SubjectId=Subjects.Id 
--group by Lectures.LectureRoom

--5. ������� ������� ��������, �� �������� ������ ��������� ���������� ���������.
--??????????
--select Teachers.Name,Teachers.Surname
--from Teachers
--where Teachers.Name='���������'and Teachers.Surname='���������'

--������� ������� ������ ���������� ���������� Computer Science.
--select Teachers.Name,avg(Teachers.Salary)
--from Teachers,Lectures,GroupsLectures,Groups,Departments,Faculties
--where Lectures.TeacherId=Teachers.Id 
--and Lectures.Id=GroupsLectures.LectureId
--and GroupsLectures.GroupId=Groups.Id
--and Groups.DepartmentId=Departments.Id
--and Departments.FacultyId=Faculties.Id
--and Faculties.Name='��������� �����'
--group by Teachers.Name

--7. ������� �������� �� ����������� ������� ��������
--����� ��� ����.
--???????????

--������� ������� ���� ������������ ������.
--select avg(Departments.Financing)
--from Departments

--������� ���� ����� ���������� �� ������� ������� ���� ��������.
--select Teachers.Name+' '+Teachers.Surname as'Teacher',count(Subjects.Name)
--from Teachers,Lectures,Subjects
--where Lectures.TeacherId=Teachers.Id 
--and Lectures.SubjectId=Subjects.Id
--group by Teachers.Name+' '+Teachers.Surname 

--������� ������� ������ ����� �������� �����.
--select GroupsLectures.DayOfWeek,Count(Subjects.Name)
--from GroupsLectures,Lectures,Subjects
--where Lectures.SubjectId=Subjects.Id
--and GroupsLectures.LectureId=Lectures.Id
--group by GroupsLectures.DayOfWeek

--������� ������ �������� �� ������� ������, �� ������ � ��� ���������.
--select Lectures.LectureRoom,Count(Departments.Name)
--from Lectures,GroupsLectures,Groups,Departments
--where Lectures.Id=GroupsLectures.LectureId
--and GroupsLectures.GroupId=Groups.Id
--and Groups.DepartmentId=Departments.Id
--group by Lectures.LectureRoom

--������� ����� ���������� �� ������� ��������, �� ��
--��� ���������.
--select Faculties.Name,Count(Subjects.Name)
--from Subjects,Lectures,GroupsLectures,Groups,Departments,Faculties
--where Lectures.SubjectId=Subjects.Id
--and Lectures.Id=GroupsLectures.LectureId
--and GroupsLectures.GroupId=Groups.Id
--and Groups.DepartmentId=Departments.Id
--and Departments.FacultyId=Faculties.Id
--group by Faculties.Name

--������� ������� ������ ��� ����� ���� ��������-��������.
--select count(Subjects.Name),Teachers.Name+' '+Teachers.Surname,Lectures.LectureRoom
--from Subjects,Lectures,Teachers
--where Lectures.SubjectId=Subjects.Id
--and Lectures.TeacherId=Teachers.Id
--group by Teachers.Name+' '+Teachers.Surname,Lectures.LectureRoom