@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @LxwB(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %67
10:
  %11 = load i8*, i8** %2
  %12 = load i8, i8* %11
  store i8 %12, i8* %4
  %13 = load i8, i8* %4
  %14 = sext i8 %13 to i32
  %15 = icmp sge i32 %14, 65
  br i1 %15, label %16, label %64
16:
  %17 = load i8, i8* %4
  %18 = sext i8 %17 to i32
  %19 = icmp sle i32 %18, 117
  br i1 %19, label %20, label %64
20:
  %21 = load i8, i8* %4
  %22 = sext i8 %21 to i32
  %23 = icmp eq i32 %22, 97
  br i1 %23, label %60, label %24
24:
  %25 = load i8, i8* %4
  %26 = sext i8 %25 to i32
  %27 = icmp eq i32 %26, 101
  br i1 %27, label %60, label %28
28:
  %29 = load i8, i8* %4
  %30 = sext i8 %29 to i32
  %31 = icmp eq i32 %30, 105
  br i1 %31, label %60, label %32
32:
  %33 = load i8, i8* %4
  %34 = sext i8 %33 to i32
  %35 = icmp eq i32 %34, 111
  br i1 %35, label %60, label %36
36:
  %37 = load i8, i8* %4
  %38 = sext i8 %37 to i32
  %39 = icmp eq i32 %38, 117
  br i1 %39, label %60, label %40
40:
  %41 = load i8, i8* %4
  %42 = sext i8 %41 to i32
  %43 = icmp eq i32 %42, 65
  br i1 %43, label %60, label %44
44:
  %45 = load i8, i8* %4
  %46 = sext i8 %45 to i32
  %47 = icmp eq i32 %46, 69
  br i1 %47, label %60, label %48
48:
  %49 = load i8, i8* %4
  %50 = sext i8 %49 to i32
  %51 = icmp eq i32 %50, 73
  br i1 %51, label %60, label %52
52:
  %53 = load i8, i8* %4
  %54 = sext i8 %53 to i32
  %55 = icmp eq i32 %54, 79
  br i1 %55, label %60, label %56
56:
  %57 = load i8, i8* %4
  %58 = sext i8 %57 to i32
  %59 = icmp eq i32 %58, 85
  br i1 %59, label %60, label %63
60:
  %61 = load i32, i32* %3
  %62 = add nsw i32 %61, 1
  store i32 %62, i32* %3
  br label %63
63:
  br label %64
64:
  %65 = load i8*, i8** %2
  %66 = getelementptr inbounds i8, i8* %65, i32 1
  store i8* %66, i8** %2
  br label %6
67:
  %68 = load i32, i32* %3
  ret i32 %68
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
  %14 = call i32 @LxwB(i8* %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
