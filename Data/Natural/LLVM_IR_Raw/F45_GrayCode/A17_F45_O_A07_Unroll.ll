@.str = constant [3 x i8] c"%u\00"
define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %12
12:
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %13, 32
  br i1 %14, label %17, label %15
15:
  br label %101
17:
  %19 = load i32, i32* %2
  %20 = load i32, i32* %4
  %21 = lshr i32 %19, %20
  %22 = and i32 %21, 1
  store i32 %22, i32* %5
  %24 = load i32, i32* %2
  %25 = load i32, i32* %4
  %26 = add nsw i32 %25, 1
  %27 = lshr i32 %24, %26
  %28 = and i32 %27, 1
  store i32 %28, i32* %6
  %30 = load i32, i32* %2
  %31 = load i32, i32* %4
  %32 = add nsw i32 %31, 2
  %33 = lshr i32 %30, %32
  %34 = and i32 %33, 1
  store i32 %34, i32* %7
  %36 = load i32, i32* %2
  %37 = load i32, i32* %4
  %38 = add nsw i32 %37, 3
  %39 = lshr i32 %36, %38
  %40 = and i32 %39, 1
  store i32 %40, i32* %8
  %42 = load i32, i32* %4
  %43 = add nsw i32 %42, 4
  %44 = icmp sge i32 %43, 32
  br i1 %44, label %45, label %46
45:
  br label %52
46:
  %47 = load i32, i32* %2
  %48 = load i32, i32* %4
  %49 = add nsw i32 %48, 4
  %50 = lshr i32 %47, %49
  %51 = and i32 %50, 1
  br label %52
52:
  %53 = phi i32 [ 0, %45 ], [ %51, %46 ]
  store i32 %53, i32* %9
  %54 = load i32, i32* %5
  %55 = load i32, i32* %6
  %56 = icmp ne i32 %54, %55
  br i1 %56, label %57, label %62
57:
  %58 = load i32, i32* %4
  %59 = shl i32 1, %58
  %60 = load i32, i32* %3
  %61 = or i32 %60, %59
  store i32 %61, i32* %3
  br label %62
62:
  %63 = load i32, i32* %6
  %64 = load i32, i32* %7
  %65 = icmp ne i32 %63, %64
  br i1 %65, label %66, label %72
66:
  %67 = load i32, i32* %4
  %68 = add nsw i32 %67, 1
  %69 = shl i32 1, %68
  %70 = load i32, i32* %3
  %71 = or i32 %70, %69
  store i32 %71, i32* %3
  br label %72
72:
  %73 = load i32, i32* %7
  %74 = load i32, i32* %8
  %75 = icmp ne i32 %73, %74
  br i1 %75, label %76, label %82
76:
  %77 = load i32, i32* %4
  %78 = add nsw i32 %77, 2
  %79 = shl i32 1, %78
  %80 = load i32, i32* %3
  %81 = or i32 %80, %79
  store i32 %81, i32* %3
  br label %82
82:
  %83 = load i32, i32* %8
  %84 = load i32, i32* %9
  %85 = icmp ne i32 %83, %84
  br i1 %85, label %86, label %92
86:
  %87 = load i32, i32* %4
  %88 = add nsw i32 %87, 3
  %89 = shl i32 1, %88
  %90 = load i32, i32* %3
  %91 = or i32 %90, %89
  store i32 %91, i32* %3
  br label %92
92:
  br label %98
98:
  %99 = load i32, i32* %4
  %100 = add nsw i32 %99, 4
  store i32 %100, i32* %4
  br label %12
101:
  %102 = load i32, i32* %3
  ret i32 %102
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %21
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i64 @strtoul(i8* %14, i8** null, i32 10)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %6
  %17 = load i32, i32* %6
  %18 = call i32 @GrayCode(i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %21
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
