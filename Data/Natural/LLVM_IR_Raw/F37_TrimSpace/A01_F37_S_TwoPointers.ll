@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @TrimSpace(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i32, i32* %3
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %14, label %43
14:
  %15 = call i16** @__ctype_b_loc()
  %16 = load i16*, i16** %15
  %17 = load i8*, i8** %2
  %18 = load i32, i32* %3
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  %22 = zext i8 %21 to i32
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i16, i16* %16, i64 %23
  %25 = load i16, i16* %24
  %26 = zext i16 %25 to i32
  %27 = and i32 %26, 8192
  %28 = icmp ne i32 %27, 0
  br i1 %28, label %40, label %29
29:
  %30 = load i8*, i8** %2
  %31 = load i32, i32* %3
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  %35 = load i8*, i8** %2
  %36 = load i32, i32* %4
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %4
  %38 = sext i32 %36 to i64
  %39 = getelementptr inbounds i8, i8* %35, i64 %38
  store i8 %34, i8* %39
  br label %40
40:
  %41 = load i32, i32* %3
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %3
  br label %7
43:
  %44 = load i8*, i8** %2
  %45 = load i32, i32* %4
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  store i8 0, i8* %47
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
  call void @TrimSpace(i8* %12)
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
