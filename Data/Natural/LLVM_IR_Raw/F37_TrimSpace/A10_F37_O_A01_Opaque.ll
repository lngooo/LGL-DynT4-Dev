@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @TrimSpace(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i32 42, i32* %5
  br label %9
9:
  %10 = load i8*, i8** %2
  %11 = load i32, i32* %3
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %54
16:
  %17 = load i32, i32* %5
  %18 = mul nsw i32 %17, 2
  %19 = srem i32 %18, 2
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %50
21:
  %22 = call i16** @__ctype_b_loc()
  %23 = load i16*, i16** %22
  %24 = load i8*, i8** %2
  %25 = load i32, i32* %3
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = zext i8 %28 to i32
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i16, i16* %23, i64 %30
  %32 = load i16, i16* %31
  %33 = zext i16 %32 to i32
  %34 = and i32 %33, 8192
  %35 = icmp ne i32 %34, 0
  br i1 %35, label %47, label %36
36:
  %37 = load i8*, i8** %2
  %38 = load i32, i32* %3
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  %41 = load i8, i8* %40
  %42 = load i8*, i8** %2
  %43 = load i32, i32* %4
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %4
  %45 = sext i32 %43 to i64
  %46 = getelementptr inbounds i8, i8* %42, i64 %45
  store i8 %41, i8* %46
  br label %47
47:
  %48 = load i32, i32* %3
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %3
  br label %53
50:
  %51 = load i32, i32* %3
  %52 = add nsw i32 %51, -1
  store i32 %52, i32* %3
  br label %53
53:
  br label %9
54:
  %55 = load i8*, i8** %2
  %56 = load i32, i32* %4
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i8, i8* %55, i64 %57
  store i8 0, i8* %58
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
