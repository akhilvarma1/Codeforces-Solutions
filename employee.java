package com.company;

public class Employee {
    private int id;
    private String name;
    private String designation;
    private int ssnNo;
    private int age;
    private double salary;
    static int idCounter;
    public void setId(int id)
    {
        this.id=id;
    }
    public int getId()
    {
        return id;
    }
    public void setName(String name)
    {
        this.name=name;
    }
    public String getName()
    {
        return  name;
    }
    public void setDesignation(String designation)
    {
        this.designation=designation;
    }
    public String getDesignation()
    {
        return designation;
    }
    public void setSsnNo(int ssnNo)
    {
        this.ssnNo=ssnNo;
    }
    public int getSsnNo()
    {
        return ssnNo;
    }
    public void setAge(int age)
    {
        this.age=age;
    }
    public int getAge()
    {
        return age;
    }
    public void setSalary(double salary)
    {
        this.salary=salary;
    }
    public double getSalary()
    {
        return salary;
    }

    public static void setIdCounter(int idCounter) {
        Employee.idCounter=idCounter;
    }
    public static int getIdCounter() {
        return idCounter;
    }
    public Employee(String name,String designation,int ssnNo,int age,double salary)
    {
        this.id=id;
        this.name=name;
        this.designation=designation;
        this.ssnNo=ssnNo;
        this.age=age;
        this.salary=salary;
        idCounter++;
    }
}
