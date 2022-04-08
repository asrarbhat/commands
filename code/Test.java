import java.util.Arrays;
public class Test{
    public static void main(String[] args){
        String string="0123456789";
        System.out.println(string.length());
        System.out.println(string.charAt(3));
        System.out.println(Arrays.toString(string.split("3")));
        System.out.println(String.join(" ",string.split("3")));
        System.out.println(string);
        // print(string.strip())
        // print(string.index("456"))
        // print("456" in string)
        // print(string.replace("456","444"))
        // print(string[::-1])
        // print(string[2:4])
        // print(string+"hello")
        // string=string+"hello"
        // print(string.upper(),string.lower())
        System.out.println(" hithere ".trim());
        System.out.println("hi there".indexOf("there"));
        System.out.println("hi there".contains("hi"));
        System.out.println("hi there".replace("hi","hello"));
        System.out.println(string.substring(1,4));
        System.out.println("hello"+" there");
        System.out.println("hello".toUpperCase()+"HI".toLowerCase());
    }
}