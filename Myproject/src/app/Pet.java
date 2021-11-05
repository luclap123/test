package app;
public class Pet 
{
    private String name;
    private int age;
    private String color;
    
    public Pet(String name, int age, String color) {
        this.name = name;
        this.age = age;
        this.color = color;
    }

    // tạo getter và setter cho các thuộc tính
    public String getName() {
        return name;
    }   
    public void setName(String name) {
        this.name = name;
    }
    public int getAge() {
        return age;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public String getColor() {
        return color;
    }
    public void setColor(String color) {
        this.color = color;
    }
    // tạo ToString()
    @Override
    public String toString() {
        return "Pet{" + "name=" + name + ", age=" + age + ", color=" + color + '}';
    }

}
