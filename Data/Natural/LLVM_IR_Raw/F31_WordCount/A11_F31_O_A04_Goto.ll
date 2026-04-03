@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %10, label %9
9:
  br label %60
10:
  br label %11
11:
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = sext i8 %13 to i32
  %15 = icmp ne i32 %14, 0
  br i1 %15, label %16, label %31
16:
  %17 = call i16** @__ctype_b_loc()
  %18 = load i16*, i16** %17
  %19 = load i8*, i8** %2
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i16, i16* %18, i64 %22
  %24 = load i16, i16* %23
  %25 = zext i16 %24 to i32
  %26 = and i32 %25, 8192
  %27 = icmp ne i32 %26, 0
  br i1 %27, label %28, label %31
28:
  %29 = load i8*, i8** %2
  %30 = getelementptr inbounds i8, i8* %29, i32 1
  store i8* %30, i8** %2
  br label %11
31:
  %32 = load i8*, i8** %2
  %33 = load i8, i8* %32
  %34 = icmp ne i8 %33, 0
  br i1 %34, label %36, label %35
35:
  br label %60
36:
  %37 = load i32, i32* %3
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %3
  br label %39
39:
  %40 = load i8*, i8** %2
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = icmp ne i32 %42, 0
  br i1 %43, label %44, label %59
44:
  %45 = call i16** @__ctype_b_loc()
  %46 = load i16*, i16** %45
  %47 = load i8*, i8** %2
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i16, i16* %46, i64 %50
  %52 = load i16, i16* %51
  %53 = zext i16 %52 to i32
  %54 = and i32 %53, 8192
  %55 = icmp ne i32 %54, 0
  br i1 %55, label %59, label %56
56:
  %57 = load i8*, i8** %2
  %58 = getelementptr inbounds i8, i8* %57, i32 1
  store i8* %58, i8** %2
  br label %39
59:
  br label %5
60:
  %61 = load i32, i32* %3
  ret i32 %61
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
  %13 = call i32 @WordCount(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
