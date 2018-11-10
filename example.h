#define MACRO 5 + 5;

struct name1_s;

struct name2_s var1;

struct name3_s var2 = {};

int some_code = MACRO;

struct name4_s var3 = var2;

struct name5_s {
  const int field1;
  int field2;
};
struct name6_s {
  int field;
} var4;

struct name7_s {
  int field;
} *ptr1;

struct name8_s {
  int field1;
  int field2[] = {1,2,3,4};
  int field3[][];
  int field4[120][5][];
  struct name9_s var5 = {
    int field1;
    int field2[] = {1,2,3,4};
    struct name10_s var6 = {
      int field1;
      int field2[] = {1,2,3,4};
    };
  };
} var7, *ptr2;

struct name11_s { int field; }
  var8 = {},
  *ptr3;

/*comment*/

struct name12_s { int field; }
  var9 = {},
  *ptr4 = &var;
