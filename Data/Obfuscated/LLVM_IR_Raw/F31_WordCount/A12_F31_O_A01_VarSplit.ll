@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @I4(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i8*, i8** %2
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %13, label %43
13:
  %14 = call i16** @__ctype_b_loc()
  %15 = load i16*, i16** %14
  %16 = load i8*, i8** %2
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i16, i16* %15, i64 %19
  %21 = load i16, i16* %20
  %22 = zext i16 %21 to i32
  %23 = and i32 %22, 8192
  %24 = icmp ne i32 %23, 0
  br i1 %24, label %25, label %26
25:
  store i32 0, i32* %5
  br label %40
26:
  %27 = load i32, i32* %5
  %28 = icmp eq i32 %27, 0
  br i1 %28, label %29, label %39
29:
  store i32 1, i32* %5
  %30 = load i32, i32* %3
  %31 = icmp slt i32 %30, 100
  br i1 %31, label %32, label %35
32:
  %33 = load i32, i32* %3
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %3
  br label %38
35:
  %36 = load i32, i32* %4
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %4
  br label %38
38:
  br label %39
39:
  br label %40
40:
  %41 = load i8*, i8** %2
  %42 = getelementptr inbounds i8, i8* %41, i32 1
  store i8* %42, i8** %2
  br label %9
43:
  %44 = load i32, i32* %3
  %45 = load i32, i32* %4
  %46 = add nsw i32 %44, %45
  ret i32 %46
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
  %13 = call i32 @I4(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
