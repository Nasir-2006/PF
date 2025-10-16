class Employe
{
    private int ID;
    private String name;
    private int age;
    private int grade;
    private double salary;
    private float bonus;
    public Employe(int ID,String name,int age,double salary)
    {
        this.ID = ID;
        this.name = name;
        this.age = age;
        this.salary = salary;
    } 
    public Employe(Employe E)
    {
        this.age = E.age;
        this.salary = E.salary;
        this.grade = E.grade;
        this.bonus = E.bonus;
    }
    public void setID(int ID)
    {
        this.ID = ID;
    }
    public void setname(String name)
    {
        this.name = name;
    }
    public void setage(int age)
    {
        this.age = age;
    }
    public void setsalary(double salary)
    {
        this.salary = salary;
    }
    public void findgrade(int salary)
    {
        this.grade = (int)(salary/1000);
    }
    public void display()
    {
        System.out.println("Id = "+this.ID);
        System.out.println("Name = "+this.name);
        System.out.println("Age = "+this.age);
        System.out.println("Grade = "+this.grade);
        System.out.println("Salary = "+this.salary);
        System.out.println("Bonus = "+this.bonus);
    }
    public void CB(int age,int grade,double salary)
    {
        this.bonus = (float)(age*1000.4);
        if(grade >= 1&&grade <= 9)
        {
            this.bonus+=5000;
        }
        else if(grade >= 10&&grade <= 16)
        {
            this.bonus+=salary*0.03;
        }
        else if(grade >= 17&&grade <= 21)
        {
            this.bonus+=salary*0.053;
        }
    }
    




    }

}