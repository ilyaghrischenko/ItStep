--������� �� ������ ���� ����� ���������� �� ����.
--select distinct Groups.Name,Teachers.Name
--from Teachers,Lectures,GroupsLectures,Groups
--where Lectures.TeacherId=Teachers.Id 
--and Lectures.Id=GroupsLectures.LectureId
--and GroupsLectures.GroupId=Groups.Id

--������� ����� ����������, ���� ������������ ������
--���� �������� ���� ������������ ����������.
--select distinct Faculties.Name
--from Faculties,Departments
--where Faculties.Id=Departments.FacultyId and Departments.Financing>Faculties.Financing

--������� ������� �������� ���� �� ����� ����, �� ���� ���������.
--select Curators.Surname,Groups.Name
--from Curators,GroupsCurators,Groups
--where Curators.Id=GroupsCurators.CuratorId
--and Groups.Id=GroupsCurators.GroupId

--������� ����� �� ������� ����������, �� ������� ������ � ���� �UR01-21�.
--select distinct Teachers.Name+' '+Teachers.Surname as 'Teacher',Groups.Name
--from Teachers,Lectures,GroupsLectures,Groups
--where Lectures.TeacherId=Teachers.Id 
--and Lectures.Id=GroupsLectures.LectureId
--and GroupsLectures.GroupId=Groups.Id
--and Groups.Name='UR01-21'

--������� ������� ���������� �� ����� ����������, �� ����
--���� ������� ������
--select distinct Teachers.Surname,Faculties.Name
--from Teachers,Lectures,GroupsLectures,Groups,Departments,Faculties
--where Lectures.TeacherId=Teachers.Id 
--and Lectures.Id=GroupsLectures.LectureId
--and GroupsLectures.GroupId=Groups.Id
--and Groups.DepartmentId=Departments.Id
--and Departments.FacultyId=Faculties.Id

--������� ����� ������ �� ����� ����, �� �� ��� ��������.
--select Departments.Name,Groups.Name
--from Groups,Departments
--where Groups.DepartmentId=Departments.Id

--������� ����� ��������, �� ���� �������� ��`������� ������.
--select Subjects.Name,Teachers.Name,Teachers.Surname
--from Teachers,Lectures,Subjects
--where Teachers.Id=Lectures.TeacherId
--and Lectures.SubjectId=Subjects.Id
--and Teachers.Name='�`�������' and Teachers.Surname= '�����'

--������� ����� ������, �� �������� ��������� ����������.
--select Departments.Name
--from Subjects ,Lectures,GroupsLectures,Groups,Departments
--where Lectures.SubjectId=Subjects.Id
--and Lectures.Id=GroupsLectures.LectureId
--and GroupsLectures.GroupId=Groups.Id
--and Groups.DepartmentId=Departments.Id
--and Subjects.Name='��������'

--������� ����� ����, �� �������� �� ���������� ��������� �������� � ���������.
--select Groups.Name
--from Faculties,Departments,Groups
--where  Groups.DepartmentId=Departments.Id
--and Departments.FacultyId=Faculties.Id
--and Faculties.Name='��������� �������� � ���������'

--������� ����� ���� 5-�� �����, � ����� ����� ����������,
--�� ���� ���� ��������.
--select Groups.Name,Faculties.Name
--from Faculties,Departments,Groups
--where  Groups.DepartmentId=Departments.Id
--and Departments.FacultyId=Faculties.Id
--and Groups.Year=5

--������� ���� ����� ���������� �� ������, �� ���� ������� (����� �������� �� ����), ������� ������� ���� �
--������, �� ��������� � ������� �510�.
--select Teachers.Name+' '+Teachers.Surname,Subjects.Name
--from Teachers,Lectures,Subjects
--where Lectures.SubjectId=Subjects.Id 
--and Lectures.TeacherId=Teachers.Id
--and Lectures.LectureRoom=510