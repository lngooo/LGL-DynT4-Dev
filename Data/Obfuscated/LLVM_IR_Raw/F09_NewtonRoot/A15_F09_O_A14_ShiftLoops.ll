@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @WH3x(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 -1, i32* %2
  br label %79
10:
  %11 = load i32, i32* %3
  %12 = icmp slt i32 %11, 2
  br i1 %12, label %13, label %15
13:
  %14 = load i32, i32* %3
  store i32 %14, i32* %2
  br label %79
15:
  %17 = load i32, i32* %3
  %18 = sext i32 %17 to i64
  store i64 %18, i64* %4
  store i64 1, i64* %5
  br label %20
20:
  %21 = load i64, i64* %4
  %22 = icmp sgt i64 %21, 0
  br i1 %22, label %23, label %28
23:
  %24 = load i64, i64* %4
  %25 = ashr i64 %24, 2
  store i64 %25, i64* %4
  %26 = load i64, i64* %5
  %27 = shl i64 %26, 1
  store i64 %27, i64* %5
  br label %20
28:
  store i32 0, i32* %6
  br label %30
30:
  %31 = load i32, i32* %6
  %32 = icmp slt i32 %31, 10
  br i1 %32, label %35, label %33
33:
  br label %50
35:
  %36 = load i64, i64* %5
  %37 = icmp sle i64 %36, 0
  br i1 %37, label %38, label %39
38:
  store i64 1, i64* %5
  br label %39
39:
  %40 = load i64, i64* %5
  %41 = load i32, i32* %3
  %42 = sext i32 %41 to i64
  %43 = load i64, i64* %5
  %44 = sdiv i64 %42, %43
  %45 = add nsw i64 %40, %44
  %46 = ashr i64 %45, 1
  store i64 %46, i64* %5
  br label %47
47:
  %48 = load i32, i32* %6
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %6
  br label %30
50:
  br label %51
51:
  %52 = load i64, i64* %5
  %53 = load i64, i64* %5
  %54 = mul nsw i64 %52, %53
  %55 = load i32, i32* %3
  %56 = sext i32 %55 to i64
  %57 = icmp sgt i64 %54, %56
  br i1 %57, label %58, label %61
58:
  %59 = load i64, i64* %5
  %60 = add nsw i64 %59, -1
  store i64 %60, i64* %5
  br label %51
61:
  br label %62
62:
  %63 = load i64, i64* %5
  %64 = add nsw i64 %63, 1
  %65 = load i64, i64* %5
  %66 = add nsw i64 %65, 1
  %67 = mul nsw i64 %64, %66
  %68 = load i32, i32* %3
  %69 = sext i32 %68 to i64
  %70 = icmp sle i64 %67, %69
  br i1 %70, label %71, label %74
71:
  %72 = load i64, i64* %5
  %73 = add nsw i64 %72, 1
  store i64 %73, i64* %5
  br label %62
74:
  %75 = load i64, i64* %5
  %76 = trunc i64 %75 to i32
  store i32 %76, i32* %2
  br label %79
79:
  %80 = load i32, i32* %2
  ret i32 %80
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
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %16
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = call i32 @WH3x(i32 %13)
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
