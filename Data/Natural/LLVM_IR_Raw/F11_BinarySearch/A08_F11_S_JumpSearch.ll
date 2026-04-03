@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @BinarySearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %12 = load i32, i32* %6
  %13 = sitofp i32 %12 to double
  %14 = call double @sqrt(double %13)
  %15 = fptosi double %14 to i32
  store i32 %15, i32* %8
  store i32 0, i32* %9
  br label %17
17:
  %18 = load i32*, i32** %5
  %19 = load i32, i32* %8
  %20 = load i32, i32* %6
  %21 = icmp slt i32 %19, %20
  br i1 %21, label %22, label %24
22:
  %23 = load i32, i32* %8
  br label %26
24:
  %25 = load i32, i32* %6
  br label %26
26:
  %27 = phi i32 [ %23, %22 ], [ %25, %24 ]
  %28 = sub nsw i32 %27, 1
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %18, i64 %29
  %31 = load i32, i32* %30
  %32 = load i32, i32* %7
  %33 = icmp slt i32 %31, %32
  br i1 %33, label %34, label %48
34:
  %35 = load i32, i32* %8
  store i32 %35, i32* %9
  %36 = load i32, i32* %6
  %37 = sitofp i32 %36 to double
  %38 = call double @sqrt(double %37)
  %39 = load i32, i32* %8
  %40 = sitofp i32 %39 to double
  %41 = fadd double %40, %38
  %42 = fptosi double %41 to i32
  store i32 %42, i32* %8
  %43 = load i32, i32* %9
  %44 = load i32, i32* %6
  %45 = icmp sge i32 %43, %44
  br i1 %45, label %46, label %47
46:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %84
47:
  br label %17
48:
  br label %49
49:
  %50 = load i32*, i32** %5
  %51 = load i32, i32* %9
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %50, i64 %52
  %54 = load i32, i32* %53
  %55 = load i32, i32* %7
  %56 = icmp slt i32 %54, %55
  br i1 %56, label %57, label %73
57:
  %58 = load i32, i32* %9
  %59 = add nsw i32 %58, 1
  store i32 %59, i32* %9
  %60 = load i32, i32* %9
  %61 = load i32, i32* %8
  %62 = load i32, i32* %6
  %63 = icmp slt i32 %61, %62
  br i1 %63, label %64, label %66
64:
  %65 = load i32, i32* %8
  br label %68
66:
  %67 = load i32, i32* %6
  br label %68
68:
  %69 = phi i32 [ %65, %64 ], [ %67, %66 ]
  %70 = icmp eq i32 %60, %69
  br i1 %70, label %71, label %72
71:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %84
72:
  br label %49
73:
  %74 = load i32*, i32** %5
  %75 = load i32, i32* %9
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i32, i32* %74, i64 %76
  %78 = load i32, i32* %77
  %79 = load i32, i32* %7
  %80 = icmp eq i32 %78, %79
  br i1 %80, label %81, label %83
81:
  %82 = load i32, i32* %9
  store i32 %82, i32* %4
  store i32 1, i32* %10
  br label %84
83:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %84
84:
  %87 = load i32, i32* %4
  ret i32 %87
}
declare double @sqrt(double)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 3
  br i1 %11, label %12, label %13
12:
  store i32 1, i32* %3
  br label %61
13:
  %15 = load i8**, i8*** %5
  %16 = getelementptr inbounds i8*, i8** %15, i64 1
  %17 = load i8*, i8** %16
  %18 = call i32 @atoi(i8* %17)
  store i32 %18, i32* %6
  %20 = load i32, i32* %4
  %21 = sub nsw i32 %20, 2
  store i32 %21, i32* %7
  %23 = load i32, i32* %7
  %24 = sext i32 %23 to i64
  %25 = mul i64 %24, 4
  %26 = call noalias i8* @malloc(i64 %25)
  store i32* %27, i32** %8
  store i32 0, i32* %9
  br label %29
29:
  %30 = load i32, i32* %9
  %31 = load i32, i32* %7
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %35, label %33
33:
  br label %50
35:
  %36 = load i8**, i8*** %5
  %37 = load i32, i32* %9
  %38 = add nsw i32 %37, 2
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8*, i8** %36, i64 %39
  %41 = load i8*, i8** %40
  %42 = call i32 @atoi(i8* %41)
  %43 = load i32*, i32** %8
  %44 = load i32, i32* %9
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  store i32 %42, i32* %46
  br label %47
47:
  %48 = load i32, i32* %9
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %9
  br label %29
50:
  %51 = load i32*, i32** %8
  %52 = load i32, i32* %7
  %53 = load i32, i32* %6
  %54 = call i32 @BinarySearch(i32* %51, i32 %52, i32 %53)
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %54)
  %56 = load i32*, i32** %8
  call void @free(i8* %57)
  store i32 0, i32* %3
  br label %61
61:
  %62 = load i32, i32* %3
  ret i32 %62
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare noalias i8* @malloc(i64)
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
