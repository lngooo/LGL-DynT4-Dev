@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @JA(i8* %0) {
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
  %11 = icmp slt i32 %10, 1
  br i1 %11, label %14, label %12
12:
  br label %50
14:
  br label %15
15:
  %16 = load i8*, i8** %2
  %17 = load i8, i8* %16
  %18 = icmp ne i8 %17, 0
  br i1 %18, label %19, label %46
19:
  %20 = call i16** @__ctype_b_loc()
  %21 = load i16*, i16** %20
  %22 = load i8*, i8** %2
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i16, i16* %21, i64 %25
  %27 = load i16, i16* %26
  %28 = zext i16 %27 to i32
  %29 = and i32 %28, 8192
  %30 = icmp ne i32 %29, 0
  br i1 %30, label %31, label %32
31:
  store i32 0, i32* %4
  br label %39
32:
  %33 = load i32, i32* %4
  %34 = icmp eq i32 %33, 0
  br i1 %34, label %35, label %38
35:
  store i32 1, i32* %4
  %36 = load i32, i32* %3
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %3
  br label %38
38:
  br label %39
39:
  %40 = load i8*, i8** %2
  %41 = getelementptr inbounds i8, i8* %40, i32 1
  store i8* %41, i8** %2
  %42 = load i32, i32* %5
  %43 = icmp sgt i32 %42, 10
  br i1 %43, label %44, label %45
44:
  br label %46
45:
  br label %15
46:
  br label %47
47:
  %48 = load i32, i32* %5
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %5
  br label %9
50:
  %51 = load i32, i32* %3
  ret i32 %51
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
  %13 = call i32 @JA(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
