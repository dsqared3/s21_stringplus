

#include "unit_tests.h"

/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "meeseeks.check" instead.
 */

START_TEST(s21_memchr_1) {
  const char *str = "meeseeks from school21";
  ck_assert_ptr_eq(memchr(str, '\0', s21_strlen(str)),
                   s21_memchr(str, '\0', s21_strlen(str)));
}
END_TEST

START_TEST(s21_memchr_2) {
  const char *str = "meeseeks from school21";
  ck_assert_ptr_eq(memchr(str, 'p', 0), s21_memchr(str, 'p', 0));
}
END_TEST

START_TEST(s21_memchr_3) {
  const char *str = "meeseeks from school21";
  ck_assert_ptr_eq(memchr(str, 'p', s21_strlen(str) / 2),
                   s21_memchr(str, 'p', s21_strlen(str) / 2));
}
END_TEST

START_TEST(s21_memchr_4) {
  const char *str = "meesee\nks from schoo\nl21";
  ck_assert_ptr_eq(memchr(str, '\n', s21_strlen(str)),
                   s21_memchr(str, '\n', s21_strlen(str)));
}
END_TEST

START_TEST(s21_memchr_5) {
  const char *str = "meeseeks from school21";
  ck_assert_ptr_eq(memchr(str, 1, s21_strlen(str)),
                   s21_memchr(str, 1, s21_strlen(str)));
}
END_TEST

START_TEST(s21_memchr_6) {
  const char *str = "meesEEks from school21";
  ck_assert_ptr_eq(memchr(str, 'e', s21_strlen(str)),
                   s21_memchr(str, 'e', s21_strlen(str)));
}
END_TEST

START_TEST(s21_memchr_7) {
  const char *str = "me e s E E ks from school21";
  ck_assert_ptr_eq(memchr(str, 'e', s21_strlen(str)),
                   s21_memchr(str, 'e', s21_strlen(str)));
}
END_TEST

START_TEST(s21_memchr_8) {
  const char *str = "\n\n\n\n\n\n\n\n";
  ck_assert_ptr_eq(memchr(str, '\n', s21_strlen(str)),
                   s21_memchr(str, '\n', s21_strlen(str)));
}
END_TEST

START_TEST(s21_memchr_9) {
  const char *str = "1234567890";
  ck_assert_ptr_eq(memchr(str, '2', s21_strlen(str)),
                   s21_memchr(str, '2', s21_strlen(str)));
}
END_TEST

START_TEST(s21_memchr_10) {
  const char *str = "             @              ";
  ck_assert_ptr_eq(memchr(str, '@', s21_strlen(str)),
                   s21_memchr(str, '@', s21_strlen(str)));
  // s21_memcmp
}
END_TEST

START_TEST(s21_memcmp__1) {
  const char *str1 = "meeseeks from school21";
  const char *str2 = "meeseeks from school21";
  ck_assert_int_eq(memcmp(str1, str2, s21_strlen(str1)),
                   s21_memcmp(str1, str2, s21_strlen(str2)));
}
END_TEST

START_TEST(s21_memcmp__2) {
  const char *str1 = "meeseeks from school21";
  const char *str2 = "meeseeks from school21";
  ck_assert_int_eq(memcmp(str1, str2, s21_strlen(str1) / 2),
                   s21_memcmp(str1, str2, s21_strlen(str1) / 2));
}
END_TEST

START_TEST(s21_memcmp__3) {
  const char *str1 = "meeseeks from school21";
  const char *str2 = "meeseeks from school21";
  ck_assert_int_eq(memcmp(str1, str2, 0), s21_memcmp(str1, str2, 0));
}
END_TEST

START_TEST(s21_memcmp__4) {
  const char *str1 = "meeseeks from school21";
  const char *str2 = "meeseeks\n from school21";
  ck_assert_int_eq(memcmp(str1, str2, 23), s21_memcmp(str1, str2, 23));
}
END_TEST

START_TEST(s21_memcmp__5) {
  const char *str1 = "meeseeks\n from school21";
  const char *str2 = "meeseeks from school21";
  ck_assert_int_eq(memcmp(str1, str2, 23), s21_memcmp(str1, str2, 23));
}
END_TEST

START_TEST(s21_memcmp__6) {
  const char *str1 = "";
  const char *str2 = "";
  ck_assert_int_eq(memcmp(str1, str2, 0), s21_memcmp(str1, str2, 0));
}
END_TEST

START_TEST(s21_memcmp__7) {
  const char *str1 = "";
  const char *str2 = " ";
  ck_assert_int_eq(memcmp(str1, str2, 1), s21_memcmp(str1, str2, 1));
}
END_TEST

START_TEST(s21_memcmp__8) {
  const char *str1 = " \0";
  const char *str2 = "\0";
  ck_assert_int_eq(memcmp(str1, str2, 1), s21_memcmp(str1, str2, 1));
}
END_TEST

START_TEST(s21_memcmp__9) {
  const char *str1 = "\0\0\0\0\0\0\0\0";
  const char *str2 = "\0\0\0\0\0\0\0\0";
  ck_assert_int_eq(memcmp(str1, str2, 5), s21_memcmp(str1, str2, 5));
}
END_TEST

START_TEST(s21_memcmp_10) {
  const char *str1 = "\n\0\0\0\0\0\0\n";
  const char *str2 = "\n\0\0\0\0\0\0\n";
  ck_assert_int_eq(memcmp(str1, str2, 9), s21_memcmp(str1, str2, 9));

  // s21_memcpy
}
END_TEST

START_TEST(s21_memcpy_1) {
  const char src[30] = "meeseeks from school21";
  char dest[30];
  const char src1[30] = "meeseeks from school21";
  char dest1[30];
  ck_assert_mem_eq(memcpy(dest, src, 0), s21_memcpy(dest1, src1, 0), 0);
}
END_TEST

START_TEST(s21_memcpy_2) {
  const char src[30] = "meeseeks from school21";
  char dest[30];
  const char src1[30] = "meeseeks from school21";
  char dest1[30];
  ck_assert_mem_eq(memcpy(dest, src, s21_strlen(src)),
                   s21_memcpy(dest1, src1, s21_strlen(src1)), s21_strlen(src1));
}
END_TEST

START_TEST(s21_memcpy_3) {
  const char src[30] = "meeseeks from school21";
  char dest[30];
  const char src1[30] = "meeseeks from school21";
  char dest1[30];
  ck_assert_mem_eq(memcpy(dest, src, s21_strlen(src) / 2),
                   s21_memcpy(dest1, src1, s21_strlen(src1) / 2),
                   s21_strlen(src1) / 2);
}
END_TEST

START_TEST(s21_memcpy_4) {
  const char src[30] = "meeseeks from school21";
  char dest[30];
  const char src1[30] = "meeseeks from school21";
  char dest1[30];
  ck_assert_mem_eq(memcpy(dest, src, 30), s21_memcpy(dest1, src1, 30), 30);
}
END_TEST

START_TEST(s21_memcpy_5) {
  const char src[30] = "meeseeks from school21";
  char dest[30];
  const char src1[30] = "meeseeks from school21";
  char dest1[30];
  ck_assert_mem_eq(memcpy(dest, src, 30), s21_memcpy(dest1, src1, 30), 30);
}
END_TEST

START_TEST(s21_memcpy_6) {
  const char src[30] = "meeseeks\n\\\\\n from school21";
  char dest[30];
  const char src1[30] = "meeseeks\n\\\\\n from school21";
  char dest1[30];
  ck_assert_mem_eq(memcpy(dest, src, 30), s21_memcpy(dest1, src1, 30), 30);
}
END_TEST

START_TEST(s21_memcpy_7) {
  const char src[30] = "mees\0eeks from scho\\0ol21";
  char dest[30];
  const char src1[30] = "mees\0eeks from scho\\0ol21";
  char dest1[30];
  ck_assert_mem_eq(memcpy(dest, src, 30), s21_memcpy(dest1, src1, 30), 30);
}
END_TEST

START_TEST(s21_memcpy_8) {
  const char src[30] = "meeseeks from school21";
  char dest[30] = "12345";
  const char src1[30] = "meeseeks from school21";
  char dest1[30] = "12345";
  ck_assert_mem_eq(memcpy(dest, src, 30), s21_memcpy(dest1, src1, 30), 30);
}
END_TEST

START_TEST(s21_memcpy_9) {
  const char src[30] = "mees\0eeks from scho\\0ol21";
  char dest[30] = "12345";
  const char src1[30] = "mees\0eeks from scho\\0ol21";
  char dest1[30] = "12345";
  ck_assert_mem_eq(memcpy(dest, src, 30), s21_memcpy(dest1, src1, 30), 30);
}
END_TEST

START_TEST(s21_memcpy_10) {
  const char src[30] = "meeseeks from school21";
  char dest[30] = "12345";
  const char src1[30] = "meeseeks from school21";
  char dest1[30] = "12345";
  ck_assert_mem_eq(memcpy(dest, src, 30), s21_memcpy(dest1, src1, 30), 30);

  // s21_trim
}
END_TEST

START_TEST(s21_trim_1) {
  char str[30] = "meeseeks from school21 ";
  char trims[4] = "m";
  char *result = s21_trim(str, trims);
  ck_assert_mem_eq(result, "eeseeks from school21 ", s21_strlen(result));
  free(result);
}
END_TEST

START_TEST(s21_trim_2) {
  char str[30] = "meeseeks from school21 ";
  char trims[4] = "m ";
  char *result = s21_trim(str, trims);
  ck_assert_mem_eq(result, "eeseeks from school21", s21_strlen(result));
  free(result);
}
END_TEST

START_TEST(s21_trim_3) {
  char str[30] = "meeseeks from school21";
  char trims[4] = "";
  char *result = s21_trim(str, trims);
  ck_assert_mem_eq(result, "meeseeks from school21", s21_strlen(result));
  free(result);
}
END_TEST

START_TEST(s21_trim_4) {
  char str[30] = "meeseeks from school21";
  char trims[10] = "meeseeks";
  char *result = s21_trim(str, trims);
  ck_assert_mem_eq(result, " from school21", s21_strlen(result));
  free(result);
}
END_TEST

START_TEST(s21_trim_5) {
  char str[30] = "";
  char trims[10] = "";
  char *result = s21_trim(str, trims);
  ck_assert_mem_eq(result, "", s21_strlen(result));
  free(result);
}
END_TEST

START_TEST(s21_trim_6) {
  char str[30] = "\0\0\0\0\\";
  char trims[10] = "\0";
  char *result = s21_trim(str, trims);
  ck_assert_mem_eq(result, "\0", s21_strlen(result));
  free(result);
}
END_TEST

START_TEST(s21_trim_7) {
  char str[30] = "\n\0";
  char trims[10] = "\n";
  char *result = s21_trim(str, trims);
  ck_assert_mem_eq(result, "\0", s21_strlen(result));
  free(result);
}
END_TEST

START_TEST(s21_trim_8) {
  char str[30] = "        1        ";
  char trims[10] = " ";
  char *result = s21_trim(str, trims);
  ck_assert_mem_eq(result, "1", s21_strlen(result));
  free(result);
}
END_TEST

START_TEST(s21_trim_9) {
  char str[30] = "111222333";
  char trims[10] = "13";
  char *result = s21_trim(str, trims);
  ck_assert_mem_eq(result, "222", s21_strlen(result));
  free(result);
}
END_TEST

START_TEST(s21_trim_10) {
  char str[30] = "1@1";
  char trims[10] = "@";
  char *result = s21_trim(str, trims);
  ck_assert_mem_eq(result, "1@1", s21_strlen(result));
  free(result);
}
END_TEST

START_TEST(s21_strncat_1) {
  char str[30] = "1meeseeks";
  char str2[30] = "1meeseeks";
  ck_assert_str_eq(strncat(str, "12345", 3), s21_strncat(str2, "12345", 3));
}
END_TEST

START_TEST(s21_strncat_2) {
  char str[30] = "2meeseeks";
  char str2[30] = "2meeseeks";
  ck_assert_str_eq(strncat(str, "12345", 0), s21_strncat(str2, "12345", 0));
}
END_TEST

START_TEST(s21_strncat_3) {
  char str[30] = "3meeseeks";
  char str2[30] = "3meeseeks";
  ck_assert_str_eq(strncat(str, "", 1), s21_strncat(str2, "", 1));
}
END_TEST

START_TEST(s21_strncat_4) {
  char str[30] = "123";
  char str2[30] = "123";
  ck_assert_str_eq(strncat(str, "12345", 6), s21_strncat(str2, "12345", 6));
}
END_TEST

START_TEST(s21_strchr_1) {
  char str[30] = "123";
  char str2[30] = "123";
  ck_assert_str_eq(strchr(str, '2'), s21_strchr(str2, '2'));
}
END_TEST

START_TEST(s21_strchr_2) {
  char str[30] = "meeseeks";
  char str2[30] = "meeseeks";
  ck_assert_ptr_eq(strchr(str, '2'), s21_strchr(str2, '2'));
}
END_TEST

START_TEST(s21_strchr_3) {
  char str[30] = "meeseeks";
  char str2[30] = "meeseeks";
  ck_assert_str_eq(strchr(str, 's'), s21_strchr(str2, 's'));
}
END_TEST

START_TEST(s21_strchr_4) {
  char str[30] = "meeseeks asd";
  ck_assert_ptr_eq(strchr(str, ' '), s21_strchr(str, ' '));
}
END_TEST

START_TEST(s21_strcpy_test1) {
  char s1[20] = "";
  char s2[20] = "";
  ck_assert_str_eq(s21_strcpy(s2, s1), strcpy(s2, s1));
}
END_TEST

START_TEST(s21_strcpy_test2) {
  char s1[50] = "21212121";
  char s2[50] = "21";
  ck_assert_str_eq(s21_strcpy(s2, s1), strcpy(s2, s1));
}
END_TEST

START_TEST(s21_strcpy_test3) {
  char s1[50] = "21";
  char s2[50] = "21212121";
  ck_assert_str_eq(s21_strcpy(s2, s1), strcpy(s2, s1));
}
END_TEST

START_TEST(s21_strcpy_test4) {
  char s1[20] = "abcdefghjikl";
  char s2[20] = " ";
  ck_assert_str_eq(s21_strcpy(s2, s1), strcpy(s2, s1));
}
END_TEST

START_TEST(s21_strcpy_test5) {
  char s1[20] = " ";
  char s2[20] = " ";
  ck_assert_str_eq(s21_strcpy(s2, s1), strcpy(s2, s1));
}
END_TEST

START_TEST(s21_strcpy_test6) {
  char s1[20] = "";
  char s2[20] = "abcdefghjikl";
  ck_assert_str_eq(s21_strcpy(s2, s1), strcpy(s2, s1));
}
END_TEST

START_TEST(s21_memset_test1) {
  char s1[20] = "abcdefghjikl";
  ck_assert_str_eq(s21_memset(s1, '1', 15), memset(s1, '1', 15));
}
END_TEST

START_TEST(s21_memset_test2) {
  char s1[20] = "";
  ck_assert_str_eq(s21_memset(s1, '1', 15), memset(s1, '1', 15));
}
END_TEST

START_TEST(s21_memset_test3) {
  char s1[20] = "";
  ck_assert_str_eq(s21_memset(s1, ' ', 15), memset(s1, ' ', 15));
}
END_TEST

START_TEST(s21_memset_test4) {
  char s1[20] = "123456789";
  ck_assert_str_eq(s21_memset(s1, 'a', 15), memset(s1, 'a', 15));
}
END_TEST

START_TEST(s21_memset_test5) {
  char s1[20] = "abcdefgh";
  ck_assert_str_eq(s21_memset(s1, 'a', 15), memset(s1, 'a', 15));
}
END_TEST

START_TEST(s21_memset_test6) {
  char s1[20] = "             ";
  ck_assert_str_eq(s21_memset(s1, ' ', 15), memset(s1, ' ', 15));
}
END_TEST

// s21_strcpy

START_TEST(s21_strncpy_test1) {
  char s1[20] = "21212121";
  const char s2[20] = "";
  ck_assert_str_eq(s21_strcpy(s1, s2), strcpy(s1, s2));

  // s21_memset
}
END_TEST

TCase *tests_s21_string_2(void) {
  TCase *tc1_1 = tcase_create("tests_s21_string_2");

  tcase_add_test(tc1_1, s21_memchr_1);
  tcase_add_test(tc1_1, s21_memchr_2);
  tcase_add_test(tc1_1, s21_memchr_3);
  tcase_add_test(tc1_1, s21_memchr_4);
  tcase_add_test(tc1_1, s21_memchr_5);
  tcase_add_test(tc1_1, s21_memchr_6);
  tcase_add_test(tc1_1, s21_memchr_7);
  tcase_add_test(tc1_1, s21_memchr_8);
  tcase_add_test(tc1_1, s21_memchr_9);
  tcase_add_test(tc1_1, s21_memchr_10);
  tcase_add_test(tc1_1, s21_memcmp__1);
  tcase_add_test(tc1_1, s21_memcmp__2);
  tcase_add_test(tc1_1, s21_memcmp__3);
  tcase_add_test(tc1_1, s21_memcmp__4);
  tcase_add_test(tc1_1, s21_memcmp__5);
  tcase_add_test(tc1_1, s21_memcmp__6);
  tcase_add_test(tc1_1, s21_memcmp__7);
  tcase_add_test(tc1_1, s21_memcmp__8);
  tcase_add_test(tc1_1, s21_memcmp__9);
  tcase_add_test(tc1_1, s21_memcmp_10);
  tcase_add_test(tc1_1, s21_memcpy_1);
  tcase_add_test(tc1_1, s21_memcpy_2);
  tcase_add_test(tc1_1, s21_memcpy_3);
  tcase_add_test(tc1_1, s21_memcpy_4);
  tcase_add_test(tc1_1, s21_memcpy_5);
  tcase_add_test(tc1_1, s21_memcpy_6);
  tcase_add_test(tc1_1, s21_memcpy_7);
  tcase_add_test(tc1_1, s21_memcpy_8);
  tcase_add_test(tc1_1, s21_memcpy_9);
  tcase_add_test(tc1_1, s21_memcpy_10);
  tcase_add_test(tc1_1, s21_trim_1);
  tcase_add_test(tc1_1, s21_trim_2);
  tcase_add_test(tc1_1, s21_trim_3);
  tcase_add_test(tc1_1, s21_trim_4);
  tcase_add_test(tc1_1, s21_trim_5);
  tcase_add_test(tc1_1, s21_trim_6);
  tcase_add_test(tc1_1, s21_trim_7);
  tcase_add_test(tc1_1, s21_trim_8);
  tcase_add_test(tc1_1, s21_trim_9);
  tcase_add_test(tc1_1, s21_trim_10);
  tcase_add_test(tc1_1, s21_strncat_1);
  tcase_add_test(tc1_1, s21_strncat_2);
  tcase_add_test(tc1_1, s21_strncat_3);
  tcase_add_test(tc1_1, s21_strncat_4);
  tcase_add_test(tc1_1, s21_strchr_1);
  tcase_add_test(tc1_1, s21_strchr_2);
  tcase_add_test(tc1_1, s21_strchr_3);
  tcase_add_test(tc1_1, s21_strchr_4);
  tcase_add_test(tc1_1, s21_strcpy_test1);
  tcase_add_test(tc1_1, s21_strcpy_test2);
  tcase_add_test(tc1_1, s21_strcpy_test3);
  tcase_add_test(tc1_1, s21_strcpy_test4);
  tcase_add_test(tc1_1, s21_strcpy_test5);
  tcase_add_test(tc1_1, s21_strcpy_test6);
  tcase_add_test(tc1_1, s21_memset_test1);
  tcase_add_test(tc1_1, s21_memset_test2);
  tcase_add_test(tc1_1, s21_memset_test3);
  tcase_add_test(tc1_1, s21_memset_test4);
  tcase_add_test(tc1_1, s21_memset_test5);
  tcase_add_test(tc1_1, s21_memset_test6);
  tcase_add_test(tc1_1, s21_strncpy_test1);

  return tc1_1;
}