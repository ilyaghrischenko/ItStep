--������� ������� ������, ��� ����������� �� ���� � ���������� �������.
--select Departments.Name 
--from Departments
--Order by Departments.ID desc;

--������� ����� ���� �� �� ��������, ��������������, ��
--����� ����, �� ����������, �Group Name� �� �Group Rating� ��������.
--select Groups.Name,Groups.Rating
--from Groups

--������� ��� ���������� ��� �������, ������� ������ ��
--��������� �� �������� �� ������� ������ �� ���������
--�� �������� (���� ������ �� ��������).
--select Teachers.Surname,sum(Teachers.Salary+Teachers.Premium)as'sum'
--from Teachers
--Group by  Teachers.Surname

--������� ������� ���������� � ������ ������ ���� � ������ ������: �The dean of faculty [faculty] is [dean].�.
--select CONCAT('The dean of faculty ', faculties.name, ' is ',faculties.Dean, '.') as 'faculty info'
--from Faculties

--������� ������� ����������, �� � ����������� �� ������
--���� �������� 1050.
--select Teachers.Surname
--from Teachers
--where Teachers.IsProfessor=1 and Teachers.Salary>1050

--������� ����� ������, ���� ������������ ���� ������
--�� 11000 ��� ����� 25000.
--select Departments.Name
--from Departments
--where Departments.Financing>25000or Departments.Financing<11000

--������� ����� ����������, ���� ���������� ���������� IT�.
--select Faculties.Name
--from Faculties
--where Faculties.Name!='��������� ��'

--������� ������� �� ������ ����������, �� �� � �����������.
--select Teachers.Surname,Teachers.Position
--from Teachers
--where Teachers.IsProfessor!=1

--������� �������, ������, ������ �� �������� ���������,
--� ���� �������� � ������� �� 160 �� 550.
--select Teachers.Surname,Teachers.Position,Teachers.Salary,Teachers.Premium
--from Teachers
--where Teachers.IsAssistant=1 and Teachers.Premium>160 and Teachers.Premium<550

--������� ������� �� ������ ���������.
--select Teachers.Surname,Teachers.Salary
--from Teachers
--where Teachers.IsAssistant=1

--������� ������� �� ������ ����������, �� ���� �������
--�� ������ �� 01.01.2000.
--select Teachers.Surname,Teachers.Position
--from Teachers
--where Teachers.EmploymentDate>'2000-01-01'

--������� ����� ������, �� � ���������� ������� ����������� 
--�� ������� �������� ����� � �������. ����, �� ���������� ������� ���� ����� �Name of Department�.
--select Departments.Name as 'Name of Department'
--from Departments
--where Departments.Name<'������� ����� � �������'
--order by Departments.Name

--������� ������� ���������, �� ����� �������� (����
--������ �� ��������) �� ����� 1200.
--select Teachers.Surname
--from Teachers
--where Teachers.IsAssistant=1 
--group by Teachers.Surname
--having sum(Teachers.Salary+Teachers.Premium)<1200

--������� ����� ���� 5-�� �����, �� ����� ������� � ������� �� 2 �� 4.
--select Groups.Name
--from Groups
--where Groups.Year=5 and Groups.Rating between 2 and 4

--������� ������� ��������� � ������� ����� 550 ���
--��������� ����� 200.
--select Teachers.Surname
--from Teachers
--where Teachers.IsAssistant=1 and Teachers.Salary<550 or Teachers.Premium<200