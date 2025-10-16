class Triangle{
    private float LOS1;
    private float LOS2;
    private float LOS3;
    private float Area;
    private float Perimeter;
    private String TOT;
    public Triangle(float LOS1,float LOS2,float LOS3)
    {
        this.LOS1 = LOS1;
        this.LOS2 = LOS2;
        this.LOS3 = LOS3;
    }
    public Triangle(Triangle T)
    {
        this.LOS1 = T.LOS1;
        this.LOS2 = T.LOS2;
        this.LOS3 = T.LOS3;
    }
    public void setLOS1(float LOS1)
    {
        this.LOS1 = LOS1;
    }
    public void setLOS2(float LOS2)
    {
        this.LOS2 = LOS2;
    }
    public void setLOS3(float LOS3)
    {
        this.LOS3 = LOS3;
    }



    public float getLOS1()
    {
        return LOS1;
    }
    public float getLOS2()
    {
        return LOS2;
    }
    public float getLOS3()
    {
        return LOS3;
    }
    public void calTOT(float LOS1,float LOS2,float LOS3)
    {
       if (LOS1 == LOS2 && LOS2 == LOS3)
        {
            TOT = "Equilateral Triangle";
        } else if (LOS1 == LOS2 || LOS2 == LOS3 || LOS1 == LOS3) 
        {
            TOT = "Isosceles Triangle";
        } else
        {
            TOT = "Scalene Triangle";
        } 
    }
    public void calArea(float LOS1,float LOS2,float LOS3)
    {
    float s = (LOS1 + LOS2 + LOS3) / 2;
    Area = (float) Math.sqrt(s * (s - LOS1) * (s - LOS2) * (s - LOS3));
    }
    public void calPara(float LOS1,float LOS2,float LOS3)
    {
        this.Perimeter = LOS1 + LOS2 + LOS3;
    }
    public static boolean CT(Triangle T1, Triangle T2, Triangle T3)
{
    if (T1.TOT.equals(T2.TOT) && T2.TOT.equals(T3.TOT))
    {
        return true;
    }
    else
    {
        return false;
    }
}
public void display() {
        System.out.println("Side 1: " + this.LOS1);
        System.out.println("Side 2: " + this.LOS2);
        System.out.println("Side 3: " + this.LOS3);
        System.out.println("Perimeter: " + this.Perimeter);
        System.out.println("Area: " + this.area)
        System.out.println("Ty: " + Perimeter)
    }
public static void main(Stri)


}