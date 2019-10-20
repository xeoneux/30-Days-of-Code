import 'dart:collection';

main() {
  Queue dentist = new Queue();

  dentist.addLast("Foo");
  dentist.addLast("Bar");
  print(dentist.removeLast()); // Bar
  print(dentist.removeLast()); // Foo
}
