@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @j(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca double
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8
  store i8* %0, i8** %3
  %8 = load i8*, i8** %3
  %9 = load i8, i8* %8
  %10 = icmp ne i8 %9, 0
  br i1 %10, label %12, label %11
11:
  store i32 0, i32* %2
  br label %78
12:
  store double 3.141590e+00, double* %4
  store i32 0, i32* %5
  br label %15
15:
  %16 = load i32, i32* %5
  %17 = icmp slt i32 %16, 2
  br i1 %17, label %20, label %18
18:
  br label %26
20:
  %21 = load double, double* %4
  %22 = fmul double %21, 1.100000e+00
  store double %22, double* %4
  br label %23
23:
  %24 = load i32, i32* %5
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %5
  br label %15
26:
  store i32 0, i32* %6
  %28 = load i8*, i8** %3
  %29 = load i8, i8* %28
  store i8 %29, i8* %7
  %30 = load i8, i8* %7
  %31 = sext i8 %30 to i32
  %32 = icmp eq i32 %31, 97
  br i1 %32, label %69, label %33
33:
  %34 = load i8, i8* %7
  %35 = sext i8 %34 to i32
  %36 = icmp eq i32 %35, 101
  br i1 %36, label %69, label %37
37:
  %38 = load i8, i8* %7
  %39 = sext i8 %38 to i32
  %40 = icmp eq i32 %39, 105
  br i1 %40, label %69, label %41
41:
  %42 = load i8, i8* %7
  %43 = sext i8 %42 to i32
  %44 = icmp eq i32 %43, 111
  br i1 %44, label %69, label %45
45:
  %46 = load i8, i8* %7
  %47 = sext i8 %46 to i32
  %48 = icmp eq i32 %47, 117
  br i1 %48, label %69, label %49
49:
  %50 = load i8, i8* %7
  %51 = sext i8 %50 to i32
  %52 = icmp eq i32 %51, 65
  br i1 %52, label %69, label %53
53:
  %54 = load i8, i8* %7
  %55 = sext i8 %54 to i32
  %56 = icmp eq i32 %55, 69
  br i1 %56, label %69, label %57
57:
  %58 = load i8, i8* %7
  %59 = sext i8 %58 to i32
  %60 = icmp eq i32 %59, 73
  br i1 %60, label %69, label %61
61:
  %62 = load i8, i8* %7
  %63 = sext i8 %62 to i32
  %64 = icmp eq i32 %63, 79
  br i1 %64, label %69, label %65
65:
  %66 = load i8, i8* %7
  %67 = sext i8 %66 to i32
  %68 = icmp eq i32 %67, 85
  br i1 %68, label %69, label %70
69:
  store i32 1, i32* %6
  br label %70
70:
  %71 = load i32, i32* %6
  %72 = load i8*, i8** %3
  %73 = getelementptr inbounds i8, i8* %72, i64 1
  %74 = call i32 @j(i8* %73)
  %75 = add nsw i32 %71, %74
  store i32 %75, i32* %2
  br label %78
78:
  %79 = load i32, i32* %2
  ret i32 %79
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
  br i1 %7, label %8, label %10
8:
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0))
  store i32 0, i32* %3
  br label %16
10:
  %11 = load i8**, i8*** %5
  %12 = getelementptr inbounds i8*, i8** %11, i64 1
  %13 = load i8*, i8** %12
  %14 = call i32 @j(i8* %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
