@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %78
10:
  %12 = load i32, i32* %3
  %13 = mul nsw i32 %12, 2
  %14 = sdiv i32 %13, 1
  store i32 %14, i32* %4
  br label %15
15:
  %16 = load i8*, i8** %2
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %32
20:
  %21 = call i16** @__ctype_b_loc()
  %22 = load i16*, i16** %21
  %23 = load i8*, i8** %2
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i16, i16* %22, i64 %26
  %28 = load i16, i16* %27
  %29 = zext i16 %28 to i32
  %30 = and i32 %29, 8192
  %31 = icmp ne i32 %30, 0
  br label %32
32:
  %33 = phi i1 [ false, %15 ], [ %31, %20 ]
  br i1 %33, label %34, label %39
34:
  %35 = load i8*, i8** %2
  %36 = getelementptr inbounds i8, i8* %35, i32 1
  store i8* %36, i8** %2
  %37 = load i32, i32* %4
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %4
  br label %15
39:
  %40 = load i8*, i8** %2
  %41 = load i8, i8* %40
  %42 = icmp ne i8 %41, 0
  br i1 %42, label %43, label %70
43:
  %44 = load i32, i32* %3
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %3
  br label %46
46:
  %47 = load i8*, i8** %2
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = icmp ne i32 %49, 0
  br i1 %50, label %51, label %64
51:
  %52 = call i16** @__ctype_b_loc()
  %53 = load i16*, i16** %52
  %54 = load i8*, i8** %2
  %55 = load i8, i8* %54
  %56 = sext i8 %55 to i32
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i16, i16* %53, i64 %57
  %59 = load i16, i16* %58
  %60 = zext i16 %59 to i32
  %61 = and i32 %60, 8192
  %62 = icmp ne i32 %61, 0
  %63 = xor i1 %62, true
  br label %64
64:
  %65 = phi i1 [ false, %46 ], [ %63, %51 ]
  br i1 %65, label %66, label %69
66:
  %67 = load i8*, i8** %2
  %68 = getelementptr inbounds i8, i8* %67, i32 1
  store i8* %68, i8** %2
  br label %46
69:
  br label %70
70:
  %71 = load i32, i32* %4
  %72 = icmp slt i32 %71, 0
  br i1 %72, label %73, label %76
73:
  %74 = load i32, i32* %3
  %75 = add nsw i32 %74, -1
  store i32 %75, i32* %3
  br label %76
76:
  br label %6
78:
  %79 = load i32, i32* %3
  ret i32 %79
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
