@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @iJH(i32 %0) {
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
  br label %50
10:
  %12 = load i32, i32* %3
  %13 = sext i32 %12 to i64
  store i64 %13, i64* %4
  store i64 1, i64* %5
  br label %15
15:
  %16 = load i64, i64* %4
  %17 = icmp sgt i64 %16, 0
  br i1 %17, label %18, label %23
18:
  %19 = load i64, i64* %4
  %20 = ashr i64 %19, 2
  store i64 %20, i64* %4
  %21 = load i64, i64* %5
  %22 = shl i64 %21, 1
  store i64 %22, i64* %5
  br label %15
23:
  store i32 0, i32* %6
  br label %25
25:
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %26, 10
  br i1 %27, label %30, label %28
28:
  br label %45
30:
  %31 = load i64, i64* %5
  %32 = icmp eq i64 %31, 0
  br i1 %32, label %33, label %34
33:
  store i64 1, i64* %5
  br label %34
34:
  %35 = load i64, i64* %5
  %36 = load i32, i32* %3
  %37 = sext i32 %36 to i64
  %38 = load i64, i64* %5
  %39 = sdiv i64 %37, %38
  %40 = add nsw i64 %35, %39
  %41 = ashr i64 %40, 1
  store i64 %41, i64* %5
  br label %42
42:
  %43 = load i32, i32* %6
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %6
  br label %25
45:
  %46 = load i64, i64* %5
  %47 = trunc i64 %46 to i32
  store i32 %47, i32* %2
  br label %50
50:
  %51 = load i32, i32* %2
  ret i32 %51
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
  %14 = call i32 @iJH(i32 %13)
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
