#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count;
    int r;
    n=n&(n-1);
    count++;
    cout<<count;
    return 0;
}

/*INSERT INTO emp VALUES('7369', 'SMITH', 'CLERK','7902', '17-DEC-80',' 800 ',NULL,'20');
INSERT INTO emp VALUES('7499','ALLEN', 'SALESMAN', '7698', '20-FEB-81', '1600' ,'300', '30');
INSERT INTO emp VALUES('7521', 'WARD', 'SALESMAN', '7698',' 22-FEB-81', '1250 ','500', '30');
INSERT INTO emp VALUES('7566', 'JONES', 'MANAGER', '7839', '02-APR-81', '2975' ,  0,'20');
INSERT INTO emp VALUES('7654', 'MARTIN', 'SALESMAN', '7698 ','28-SEP-81', '1250', '1400',' 30');
INSERT INTO emp VALUES('7698', 'BLAKE', 'MANAGER', '7839', '01-MAY-81', '2850',0, '30');
INSERT INTO emp VALUES('7782', 'CLARK', 'MANAGER', '7839', '09-JUN-81', '2450' ,0,'10');
INSERT INTO emp VALUES('7788', 'SCOTT', 'ANALYST', '7566', '19-APR-87', '3000',0, '20');
INSERT INTO emp VALUES('7839', 'KING', 'PRESIDENT', '17-NOV-81', '5000',0, '10');
INSERT INTO EMP VALUES('7844', 'TURNER', 'SALESMAN' ,'7698' ,'08-SEP-81', '1500', '0', '30');
INSERT INTO EMP VALUES('7876', 'ADAMS', 'CLERK', '7788', '23-MAY-87' ,'1100' 0,,'20');
INSERT INTO EMP VALUES('7900', 'JAMES', 'CLERK', '7698', '03-DEC-81', '950',0, '30');
INSERT INTO EMP VALUES('7902', 'FORD' ,'ANALYST', '7566', '03-DEC-81', '3000', 0,'20');
INSERT INTO EMP VALUES('7934' ,'MILLER', 'CLERK', '7782' ,'23-JAN-82' ,'1300' ,0,'0');



insert into DEPT values('10', 'ACCOUNTING' ,'NEW YORK');
insert into DEPT values('20', 'RESEARCH', 'DALLAS');
insert into DEPT values('30', 'SALES' ,'CHICAGO');
insert into DEPT values('40', 'OPERATIONS', 'BOSTO0
*/
