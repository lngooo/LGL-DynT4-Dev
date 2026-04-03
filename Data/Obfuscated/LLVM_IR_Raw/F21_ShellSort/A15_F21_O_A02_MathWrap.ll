@.str = constant [5 x i8] c"%d%c\00"
define dso_local void @X(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = sdiv i32 %12, 3
  %14 = icmp slt i32 %11, %13
  br i1 %14, label %15, label %21
15:
  %16 = call double @pow(double 3.000000e+00, double 1.000000e+00)
  %17 = load i32, i32* %5
  %18 = sitofp i32 %17 to double
  %19 = call double @llvm.fmuladd.f64(double %16, double %18, double 1.000000e+00)
  %20 = fptosi double %19 to i32
  store i32 %20, i32* %5
  br label %10
21:
  br label %22
22:
  %23 = load i32, i32* %5
  %24 = icmp sge i32 %23, 1
  br i1 %24, label %25, label %90
25:
  %27 = load i32, i32* %5
  store i32 %27, i32* %6
  br label %28
28:
  %29 = load i32, i32* %6
  %30 = load i32, i32* %4
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %34, label %32
32:
  br label %85
34:
  %36 = load i32*, i32** %3
  %37 = load i32, i32* %6
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  store i32 %40, i32* %7
  %42 = load i32, i32* %6
  store i32 %42, i32* %8
  br label %43
43:
  %44 = load i32, i32* %8
  %45 = load i32, i32* %5
  %46 = icmp sge i32 %44, %45
  br i1 %46, label %47, label %57
47:
  %48 = load i32*, i32** %3
  %49 = load i32, i32* %8
  %50 = load i32, i32* %5
  %51 = sub nsw i32 %49, %50
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %48, i64 %52
  %54 = load i32, i32* %53
  %55 = load i32, i32* %7
  %56 = icmp sgt i32 %54, %55
  br label %57
57:
  %58 = phi i1 [ false, %43 ], [ %56, %47 ]
  br i1 %58, label %59, label %74
59:
  %60 = load i32*, i32** %3
  %61 = load i32, i32* %8
  %62 = load i32, i32* %5
  %63 = sub nsw i32 %61, %62
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %60, i64 %64
  %66 = load i32, i32* %65
  %67 = load i32*, i32** %3
  %68 = load i32, i32* %8
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %67, i64 %69
  store i32 %66, i32* %70
  %71 = load i32, i32* %5
  %72 = load i32, i32* %8
  %73 = sub nsw i32 %72, %71
  store i32 %73, i32* %8
  br label %43
74:
  %75 = load i32, i32* %7
  %76 = load i32*, i32** %3
  %77 = load i32, i32* %8
  %78 = sext i32 %77 to i64
  %79 = getelementptr inbounds i32, i32* %76, i64 %78
  store i32 %75, i32* %79
  br label %82
82:
  %83 = load i32, i32* %6
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %6
  br label %28
85:
  %86 = call double @sqrt(double 9.000000e+00)
  %87 = fptosi double %86 to i32
  %88 = load i32, i32* %5
  %89 = sdiv i32 %88, %87
  store i32 %89, i32* %5
  br label %22
90:
  ret void
}
declare double @pow(double, double)
declare double @llvm.fmuladd.f64(double, double, double)
declare double @sqrt(double)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %76
13:
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %6
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = mul i64 %19, 4
  %21 = call noalias i8* @malloc(i64 %20)
  store i32* %22, i32** %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  br label %45
30:
  %31 = load i8**, i8*** %5
  %32 = load i32, i32* %8
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8*, i8** %31, i64 %34
  %36 = load i8*, i8** %35
  %37 = call i32 @atoi(i8* %36)
  %38 = load i32*, i32** %7
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  store i32 %37, i32* %41
  br label %42
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  br label %24
45:
  %46 = load i32*, i32** %7
  %47 = load i32, i32* %6
  call void @X(i32* %46, i32 %47)
  store i32 0, i32* %9
  br label %49
49:
  %50 = load i32, i32* %9
  %51 = load i32, i32* %6
  %52 = icmp slt i32 %50, %51
  br i1 %52, label %55, label %53
53:
  br label %71
55:
  %56 = load i32*, i32** %7
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = load i32, i32* %9
  %62 = load i32, i32* %6
  %63 = sub nsw i32 %62, 1
  %64 = icmp eq i32 %61, %63
  %65 = zext i1 %64 to i64
  %66 = select i1 %64, i32 10, i32 32
  %67 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %60, i32 %66)
  br label %68
68:
  %69 = load i32, i32* %9
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %9
  br label %49
71:
  %72 = load i32*, i32** %7
  call void @free(i8* %73)
  store i32 0, i32* %3
  br label %76
76:
  %77 = load i32, i32* %3
  ret i32 %77
}
declare noalias i8* @malloc(i64)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
