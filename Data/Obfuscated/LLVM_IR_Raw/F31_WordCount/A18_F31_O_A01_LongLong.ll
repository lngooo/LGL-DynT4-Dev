@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @h(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i64
  %4 = alloca i32
  store i8* %0, i8** %2
  store i64 0, i64* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %11, label %35
11:
  %12 = call i16** @__ctype_b_loc()
  %13 = load i16*, i16** %12
  %14 = load i8*, i8** %2
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i16, i16* %13, i64 %17
  %19 = load i16, i16* %18
  %20 = zext i16 %19 to i32
  %21 = and i32 %20, 8192
  %22 = icmp ne i32 %21, 0
  br i1 %22, label %23, label %24
23:
  store i32 0, i32* %4
  br label %31
24:
  %25 = load i32, i32* %4
  %26 = icmp eq i32 %25, 0
  br i1 %26, label %27, label %30
27:
  store i32 1, i32* %4
  %28 = load i64, i64* %3
  %29 = add nsw i64 %28, 1
  store i64 %29, i64* %3
  br label %30
30:
  br label %31
31:
  br label %32
32:
  %33 = load i8*, i8** %2
  %34 = getelementptr inbounds i8, i8* %33, i32 1
  store i8* %34, i8** %2
  br label %7
35:
  %36 = load i64, i64* %3
  %37 = trunc i64 %36 to i32
  ret i32 %37
}
declare i16** @__ctype_b_loc()
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @h(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
