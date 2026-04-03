define dso_local i32 @cmp(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %3
  %7 = load i32, i32* %6
  %8 = load i8*, i8** %4
  %10 = load i32, i32* %9
  %11 = sub nsw i32 %7, %10
  ret i32 %11
}
define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %5 = load i32*, i32** %3
  %7 = load i32, i32* %4
  %8 = sext i32 %7 to i64
  call void @qsort(i8* %6, i64 %8, i64 4, i32 (i8*, i8*)* @cmp)
  ret void
}
declare void @qsort(i8*, i64, i64, i32 (i8*, i8*)*)
