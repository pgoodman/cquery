namespace hello {
void foo(int a, int b);
}

/*
OUTPUT:
{
  "funcs": [{
      "id": 0,
      "usr": "c:@N@hello@F@foo#I#I#",
      "short_name": "foo",
      "qualified_name": "hello::foo",
      "hover": "void (int, int)",
      "declarations": ["2:6-2:9"]
    }]
}
*/
