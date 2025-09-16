import java.util.*;
public class TodoApp {
  static List<String> todos = new ArrayList<>();
  public static void main(String[] args) {
    todos.add("Sample Task");
    for(String t: todos) {
      System.out.println(t);
    }
  }
}
