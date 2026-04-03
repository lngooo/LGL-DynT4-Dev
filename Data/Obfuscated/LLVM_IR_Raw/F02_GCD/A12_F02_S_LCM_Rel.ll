@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @hGE8(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i64
  %7 = alloca i32
  %8 = alloca i64
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %9 = load i32, i32* %4
  %10 = call i32 @abs(i32 %9)
  store i32 %10, i32* %4
  %11 = load i32, i32* %5
  %12 = call i32 @abs(i32 %11)
  store i32 %12, i32* %5
  %13 = load i32, i32* %4
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %18, label %15
15:
  %16 = load i32, i32* %5
  %17 = icmp eq i32 %16, 0
  br i1 %17, label %18, label %22
18:
  %19 = load i32, i32* %4
  %20 = load i32, i32* %5
  %21 = or i32 %19, %20
  store i32 %21, i32* %3
  br label %69
22:
  %24 = load i32, i32* %4
  %25 = sext i32 %24 to i64
  %26 = load i32, i32* %5
  %27 = sext i32 %26 to i64
  %28 = mul nsw i64 %25, %27
  store i64 %28, i64* %6
  %30 = load i32, i32* %4
  %31 = load i32, i32* %5
  %32 = icmp sgt i32 %30, %31
  br i1 %32, label %33, label %35
33:
  %34 = load i32, i32* %4
  br label %37
35:
  %36 = load i32, i32* %5
  br label %37
37:
  %38 = phi i32 [ %34, %33 ], [ %36, %35 ]
  store i32 %38, i32* %7
  %40 = load i32, i32* %7
  %41 = sext i32 %40 to i64
  store i64 %41, i64* %8
  br label %42
42:
  %43 = load i64, i64* %8
  %44 = load i32, i32* %4
  %45 = sext i32 %44 to i64
  %46 = srem i64 %43, %45
  %47 = icmp ne i64 %46, 0
  br i1 %47, label %54, label %48
48:
  %49 = load i64, i64* %8
  %50 = load i32, i32* %5
  %51 = sext i32 %50 to i64
  %52 = srem i64 %49, %51
  %53 = icmp ne i64 %52, 0
  br label %54
54:
  %55 = phi i1 [ true, %42 ], [ %53, %48 ]
  br i1 %55, label %56, label %61
56:
  %57 = load i32, i32* %7
  %58 = sext i32 %57 to i64
  %59 = load i64, i64* %8
  %60 = add nsw i64 %59, %58
  store i64 %60, i64* %8
  br label %42
61:
  %62 = load i64, i64* %6
  %63 = load i64, i64* %8
  %64 = sdiv i64 %62, %63
  %65 = trunc i64 %64 to i32
  store i32 %65, i32* %3
  br label %69
69:
  %70 = load i32, i32* %3
  ret i32 %70
}
declare i32 @abs(i32)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 2
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  %18 = call i32 @hGE8(i32 %13, i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
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
