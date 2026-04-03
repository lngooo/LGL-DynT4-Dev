@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %3
  %9 = load i32, i32* %3
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %2
  br label %94
12:
  %14 = load i32, i32* %3
  %15 = sdiv i32 %14, 8
  %16 = add nsw i32 %15, 1
  %17 = sext i32 %16 to i64
  %18 = call noalias i8* @calloc(i64 %17, i64 1)
  store i8* %18, i8** %4
  store i32 2, i32* %5
  br label %20
20:
  %21 = load i32, i32* %5
  %22 = load i32, i32* %5
  %23 = mul nsw i32 %21, %22
  %24 = load i32, i32* %3
  %25 = icmp sle i32 %23, %24
  br i1 %25, label %28, label %26
26:
  store i32 2, i32* %6
  br label %74
28:
  %29 = load i8*, i8** %4
  %30 = load i32, i32* %5
  %31 = sdiv i32 %30, 8
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %29, i64 %32
  %34 = load i8, i8* %33
  %35 = zext i8 %34 to i32
  %36 = load i32, i32* %5
  %37 = srem i32 %36, 8
  %38 = shl i32 1, %37
  %39 = and i32 %35, %38
  %40 = icmp ne i32 %39, 0
  br i1 %40, label %70, label %41
41:
  %43 = load i32, i32* %5
  %44 = load i32, i32* %5
  %45 = mul nsw i32 %43, %44
  store i32 %45, i32* %7
  br label %46
46:
  %47 = load i32, i32* %7
  %48 = load i32, i32* %3
  %49 = icmp sle i32 %47, %48
  br i1 %49, label %52, label %50
50:
  store i32 5, i32* %6
  br label %69
52:
  %53 = load i32, i32* %7
  %54 = srem i32 %53, 8
  %55 = shl i32 1, %54
  %56 = load i8*, i8** %4
  %57 = load i32, i32* %7
  %58 = sdiv i32 %57, 8
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %56, i64 %59
  %61 = load i8, i8* %60
  %62 = zext i8 %61 to i32
  %63 = or i32 %62, %55
  %64 = trunc i32 %63 to i8
  store i8 %64, i8* %60
  br label %65
65:
  %66 = load i32, i32* %5
  %67 = load i32, i32* %7
  %68 = add nsw i32 %67, %66
  store i32 %68, i32* %7
  br label %46
69:
  br label %70
70:
  br label %71
71:
  %72 = load i32, i32* %5
  %73 = add nsw i32 %72, 1
  store i32 %73, i32* %5
  br label %20
74:
  %76 = load i8*, i8** %4
  %77 = load i32, i32* %3
  %78 = sdiv i32 %77, 8
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i8, i8* %76, i64 %79
  %81 = load i8, i8* %80
  %82 = zext i8 %81 to i32
  %83 = load i32, i32* %3
  %84 = srem i32 %83, 8
  %85 = shl i32 1, %84
  %86 = and i32 %82, %85
  %87 = icmp ne i32 %86, 0
  %88 = xor i1 %87, true
  %89 = zext i1 %88 to i32
  store i32 %89, i32* %8
  %90 = load i8*, i8** %4
  call void @free(i8* %90)
  %91 = load i32, i32* %8
  store i32 %91, i32* %2
  store i32 1, i32* %6
  br label %94
94:
  %95 = load i32, i32* %2
  ret i32 %95
}
declare noalias i8* @calloc(i64, i64)
declare void @free(i8*)
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
  store i32 1, i32* %3
  br label %16
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = call i32 @IsPrime(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
