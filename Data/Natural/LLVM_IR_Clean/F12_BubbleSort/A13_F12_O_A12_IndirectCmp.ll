define dso_local i32 @core_cmp(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %3
  %7 = load i32, i32* %6
  %8 = load i8*, i8** %4
  %10 = load i32, i32* %9
  %11 = icmp sgt i32 %7, %10
  %12 = zext i1 %11 to i32
  %13 = load i8*, i8** %3
  %15 = load i32, i32* %14
  %16 = load i8*, i8** %4
  %18 = load i32, i32* %17
  %19 = icmp slt i32 %15, %18
  %20 = zext i1 %19 to i32
  %21 = sub nsw i32 %12, %20
  ret i32 %21
}
define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32 (i8*, i8*)*
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 (i8*, i8*)* @core_cmp, i32 (i8*, i8*)** %5
  %7 = load i32*, i32** %3
  %9 = load i32, i32* %4
  %10 = sext i32 %9 to i64
  %11 = load i32 (i8*, i8*)*, i32 (i8*, i8*)** %5
  call void @qsort(i8* %8, i64 %10, i64 4, i32 (i8*, i8*)* %11)
  ret void
}
declare void @qsort(i8*, i64, i64, i32 (i8*, i8*)*)
