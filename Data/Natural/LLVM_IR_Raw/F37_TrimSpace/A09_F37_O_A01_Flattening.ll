@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @TrimSpace(i8* %0) {
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
  %10 = load i32, i32* %5
  %11 = icmp ne i32 %10, -1
  br i1 %11, label %12, label %61
12:
  %13 = load i32, i32* %5
  switch i32 %13, label %60 [
    i32 0, label %14
    i32 1, label %24
    i32 2, label %52
    i32 3, label %55
  ]
14:
  %15 = load i8*, i8** %2
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = icmp eq i32 %20, 0
  %22 = zext i1 %21 to i64
  %23 = select i1 %21, i32 3, i32 1
  store i32 %23, i32* %5
  br label %60
24:
  %25 = call i16** @__ctype_b_loc()
  %26 = load i16*, i16** %25
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %3
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = zext i8 %31 to i32
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i16, i16* %26, i64 %33
  %35 = load i16, i16* %34
  %36 = zext i16 %35 to i32
  %37 = and i32 %36, 8192
  %38 = icmp ne i32 %37, 0
  br i1 %38, label %51, label %39
39:
  %40 = load i8*, i8** %2
  %41 = load i32, i32* %3
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = load i8*, i8** %2
  %46 = load i32, i32* %4
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  store i8 %44, i8* %48
  %49 = load i32, i32* %4
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %4
  br label %51
51:
  store i32 2, i32* %5
  br label %60
52:
  %53 = load i32, i32* %3
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %3
  store i32 0, i32* %5
  br label %60
55:
  %56 = load i8*, i8** %2
  %57 = load i32, i32* %4
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i8, i8* %56, i64 %58
  store i8 0, i8* %59
  store i32 -1, i32* %5
  br label %60
60:
  br label %9
61:
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
