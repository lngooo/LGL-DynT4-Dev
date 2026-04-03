@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 5, i32* %4
  store i32 10, i32* %5
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i8*, i8** %2
  %13 = load i32, i32* %6
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = sext i8 %16 to i32
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %21, label %19
19:
  br label %77
21:
  %22 = load i32, i32* %4
  %23 = load i32, i32* %5
  %24 = add nsw i32 %22, %23
  %25 = icmp eq i32 %24, 15
  br i1 %25, label %26, label %70
26:
  %27 = call i16** @__ctype_b_loc()
  %28 = load i16*, i16** %27
  %29 = load i8*, i8** %2
  %30 = load i32, i32* %6
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i16, i16* %28, i64 %35
  %37 = load i16, i16* %36
  %38 = zext i16 %37 to i32
  %39 = and i32 %38, 8192
  %40 = icmp ne i32 %39, 0
  br i1 %40, label %69, label %41
41:
  %42 = call i16** @__ctype_b_loc()
  %43 = load i16*, i16** %42
  %44 = load i8*, i8** %2
  %45 = load i32, i32* %6
  %46 = add nsw i32 %45, 1
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %44, i64 %47
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i16, i16* %43, i64 %51
  %53 = load i16, i16* %52
  %54 = zext i16 %53 to i32
  %55 = and i32 %54, 8192
  %56 = icmp ne i32 %55, 0
  br i1 %56, label %66, label %57
57:
  %58 = load i8*, i8** %2
  %59 = load i32, i32* %6
  %60 = add nsw i32 %59, 1
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %58, i64 %61
  %63 = load i8, i8* %62
  %64 = sext i8 %63 to i32
  %65 = icmp eq i32 %64, 0
  br i1 %65, label %66, label %69
66:
  %67 = load i32, i32* %3
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %3
  br label %69
69:
  br label %73
70:
  %71 = load i32, i32* %3
  %72 = add nsw i32 %71, -1
  store i32 %72, i32* %3
  br label %73
73:
  br label %74
74:
  %75 = load i32, i32* %6
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %6
  br label %11
77:
  %78 = load i32, i32* %3
  ret i32 %78
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
