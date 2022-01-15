import java.util.Scanner;
import java.io.PrintStream;
import java.util.HashMap;
import java.util.Map;
import java.util.List;
import java.util.ArrayList;
public class Basics{
    public static void main(String[] args){
        // System.out.println("hello world");
        

        //data types
        // char ch='a';
        // byte bite=3;
        // short short_integer=33;
        // int integer=32;
        // long long_int=4l;
        // float floating_point=4.332f;
        // double double_precision=34.44444;
        // boolean bool=true;

        
        
        // typecasting and taking inputs
        // Scanner scan=new Scanner(System.in);
        // char ch=scan.next().charAt(0);
        // byte bite=scan.nextByte();
        // short short_integer=scan.nextShort();
        // int integer=scan.nextInt();
        // long long_int=scan.nextLong();
        // float floating_point=scan.nextFloat();
        // double double_precision=scan.nextDouble();
        // boolean bool=scan.nextBoolean();
        // String str=scan.nextLine();
        // System.out.println(ch+" "+bite+" "+ short_integer+" "+integer+" "+long_int+" "+floating_point+" "+double_precision+" "+bool);
        // System.out.println(str);
        // PrintStream p=System.out;
        // p.println((int)3.14);
        // p.println((char)93);
        // int n=Integer.parseInt("44");
        // p.println(n*n);
        // String s=Integer.toString(n*n);
        // p.println(s);
        // for(int i=-3;i<10;i++){
        //     p.println(factorial(i));
        // }
        
        // Map<String,Integer> map=new HashMap<>();
        // map.put("name0",3);
        // map.put("name1",4);
        // map.put("name2",5);
        // p.println(map.get("name7"));//returns null
        // p.println(map.get("name0"));
        // p.println(map.getOrDefault("name7",-1));
        // p.println(map.keySet());
        // p.println(map.values());
        // p.println(map.entrySet());
        // p.println(map.keySet().contains("name99"));
        // map.remove("name0");
        // p.println(map.keySet());


        // List<String> list=new ArrayList<>();
        // list.add("hi");
        // list.add("hiff");
        // list.add("higgd");
        // list.add("hidfd");
        // list.add("hiii");
        // list.add(3,"hello");
        // list.remove("hiff");
        // list.remove(0);

        // p.println(list);
        // p.println(list.size());
        // list.get(list.size()-1);
        // p.println(list.contains("hiff"));




        




        


        
    }
    public static long factorial(int positive_integer){
        if (positive_integer<0){
            return -1;
        }
        long result=1;
        for(int i=1;i<=positive_integer;++i){
            result*=i;
        }
        return result;
    }
}