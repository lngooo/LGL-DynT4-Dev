@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @x(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %2
  %8 = load i8*, i8** %2
  %9 = call i64 @strlen(i8* %8)
  %10 = trunc i64 %9 to i32
  store i32 %10, i32* %3
  %11 = load i32, i32* %3
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 1, i32* %4
  br label %73
14:
  store i32 0, i32* %5
  br label %16
16:
  %17 = load i32, i32* %5
  %18 = load i32, i32* %3
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %22, label %20
20:
  store i32 2, i32* %4
  br label %71
22:
  store i32 1, i32* %6
  %24 = load i32, i32* %3
  %25 = load i32, i32* %3
  %26 = mul nsw i32 %24, %25
  %27 = add nsw i32 %26, 1
  %28 = icmp sgt i32 %27, 0
  br i1 %28, label %29, label %66
29:
  br label %30
30:
  %31 = load i32, i32* %5
  %32 = add nsw i32 %31, 1
  %33 = load i32, i32* %3
  %34 = icmp slt i32 %32, %33
  br i1 %34, label %35, label %50
35:
  %36 = load i8*, i8** %2
  %37 = load i32, i32* %5
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %36, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = load i8*, i8** %2
  %43 = load i32, i32* %5
  %44 = add nsw i32 %43, 1
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i8, i8* %42, i64 %45
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = icmp eq i32 %41, %48
  br label %50
50:
  %51 = phi i1 [ false, %30 ], [ %49, %35 ]
  br i1 %51, label %52, label %57
52:
  %53 = load i32, i32* %6
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %6
  %55 = load i32, i32* %5
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %5
  br label %30
57:
  %58 = load i8*, i8** %2
  %59 = load i32, i32* %5
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i8, i8* %58, i64 %60
  %62 = load i8, i8* %61
  %63 = sext i8 %62 to i32
  %64 = load i32, i32* %6
  %65 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %63, i32 %64)
  br label %66
66:
  br label %68
68:
  %69 = load i32, i32* %5
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %5
  br label %16
71:
  %72 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  store i32 0, i32* %4
  br label %73
73:
  %75 = load i32, i32* %4
  switch i32 %75, label %77 [
    i32 0, label %76
    i32 1, label %76
  ]
76:
  ret void
77:
  unreachable
}
declare i64 @strlen(i8*)
declare i32 @printf(i8*, ...)
