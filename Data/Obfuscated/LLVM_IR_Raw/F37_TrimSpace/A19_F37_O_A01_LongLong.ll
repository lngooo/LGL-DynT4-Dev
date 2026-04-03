@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @sqWE(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i64
  %4 = alloca i64
  store i8* %0, i8** %2
  store i64 0, i64* %3
  store i64 0, i64* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i64, i64* %3
  %10 = getelementptr inbounds i8, i8* %8, i64 %9
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = icmp ne i32 %12, 0
  br i1 %13, label %14, label %41
14:
  %15 = call i16** @__ctype_b_loc()
  %16 = load i16*, i16** %15
  %17 = load i8*, i8** %2
  %18 = load i64, i64* %3
  %19 = getelementptr inbounds i8, i8* %17, i64 %18
  %20 = load i8, i8* %19
  %21 = zext i8 %20 to i32
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i16, i16* %16, i64 %22
  %24 = load i16, i16* %23
  %25 = zext i16 %24 to i32
  %26 = and i32 %25, 8192
  %27 = icmp ne i32 %26, 0
  br i1 %27, label %38, label %28
28:
  %29 = load i8*, i8** %2
  %30 = load i64, i64* %3
  %31 = getelementptr inbounds i8, i8* %29, i64 %30
  %32 = load i8, i8* %31
  %33 = load i8*, i8** %2
  %34 = load i64, i64* %4
  %35 = getelementptr inbounds i8, i8* %33, i64 %34
  store i8 %32, i8* %35
  %36 = load i64, i64* %4
  %37 = add nsw i64 %36, 1
  store i64 %37, i64* %4
  br label %38
38:
  %39 = load i64, i64* %3
  %40 = add nsw i64 %39, 1
  store i64 %40, i64* %3
  br label %7
41:
  %42 = load i8*, i8** %2
  %43 = load i64, i64* %4
  %44 = getelementptr inbounds i8, i8* %42, i64 %43
  store i8 0, i8* %44
  ret void
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
  br label %17
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @sqWE(i8* %12)
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)
