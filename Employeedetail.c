​#​include​ ​<​stdio.h​>​
#​include​ ​<​conio.h​>​
​int​ ​main​()
{
​struct​ empdetails
{
    ​char​  empname[​100​];
    ​int​ eno;
    ​float​ salary;
    ​char​   gender[​6​];
    ​char​    maritalstatus[​12​];
};
    empdetails emp;
    ​printf​(​"​Enter name of employee : ​"​);
    ​scanf​(​"​%s​"​,&emp.​empname​);
    ​printf​(​"​Enter gender of employee : ​"​);
    ​scanf​(​"​ ​%s​"​,&emp.​gender​);
    ​printf​(​"​Enter salary of employee : ​"​);
    ​scanf​(​"​%f​"​,&emp.​salary​);
    ​printf​(​"​Enter marital status of the employee : ​"​);
    ​scanf​(​"​ ​%s​"​,&emp.​maritalstatus​);
    ​printf​(​"​Enter id number of the employee : ​"​);
    ​scanf​(​"​%d​"​,&emp.​eno​);
    ​printf​(​"​\n​Emoloyee details are:​"​);
    ​printf​(​"​ ​\n​NAME : ​%s​\t​"​,emp.​empname​);
    ​printf​(​"​\t\n​SALARY : ​%f​ ​"​,emp.​salary​);
    ​printf​(​"​\t\n​GENDER : ​%s​"​,emp.​gender​);
    ​printf​(​"​\t\n​EMPLOYEE NO : ​%d​"​,emp.​eno​);
    ​printf​(​"​\t\n​MARITAL STATUS : ​%s​"​,emp.​maritalstatus​);
    ​return​ ​0​;
}
