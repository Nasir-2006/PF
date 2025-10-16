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
        this.Id = ID;
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
    public void set

}