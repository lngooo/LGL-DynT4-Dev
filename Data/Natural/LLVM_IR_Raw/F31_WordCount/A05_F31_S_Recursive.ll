@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @skip_and_count(i8* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  %6 = load i8*, i8** %4
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %10, label %9
9:
  store i32 0, i32* %3
  br label %38
10:
  %11 = call i16** @__ctype_b_loc()
  %12 = load i16*, i16** %11
  %13 = load i8*, i8** %4
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i16, i16* %12, i64 %16
  %18 = load i16, i16* %17
  %19 = zext i16 %18 to i32
  %20 = and i32 %19, 8192
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %22, label %26
22:
  %23 = load i8*, i8** %4
  %24 = getelementptr inbounds i8, i8* %23, i64 1
  %25 = call i32 @skip_and_count(i8* %24, i32 0)
  store i32 %25, i32* %3
  br label %38
26:
  %27 = load i32, i32* %5
  %28 = icmp ne i32 %27, 0
  br i1 %28, label %34, label %29
29:
  %30 = load i8*, i8** %4
  %31 = getelementptr inbounds i8, i8* %30, i64 1
  %32 = call i32 @skip_and_count(i8* %31, i32 1)
  %33 = add nsw i32 1, %32
  store i32 %33, i32* %3
  br label %38
34:
  %35 = load i8*, i8** %4
  %36 = getelementptr inbounds i8, i8* %35, i64 1
  %37 = call i32 @skip_and_count(i8* %36, i32 1)
  store i32 %37, i32* %3
  br label %38
38:
  %39 = load i32, i32* %3
  ret i32 %39
}
declare i16** @__ctype_b_loc()
define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i32 @skip_and_count(i8* %3, i32 0)
  ret i32 %4
}
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
  %13 = call i32 @WordCount(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
